/* 
 * Полная версия чат-кдиента, с вохможностью отправки и чтения
 * сообщений одновременно
 */

 import java.io.*;
 import java.net.*;
 import java.util.*;
 import javax.swing.*;
 import java.awt.*;
 import java.awt.event.*;

 public class SimpleChatClient {
    JTextArea incoming;
    JTextField outgoing;
    BufferedReader reader;
    PrintWriter writer;
    Socket sock;

    public static void main(String[] args) {
        SimpleChatClient client = new SimpleChatClient();
        client.go();
    }

    public void go() {
        JFrame frame = new JFrame("Friends Simple Chat Client");
        JPanel mainPanel = new JPanel();
        incoming = new JTextArea(15, 50);
        incoming.setLineWrap(true);
        incoming.setWrapStyleWord(true);
        incoming.setEditable(false);
        JScrollPane qScroller = new JScrollPane(incoming);
        qScroller.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
        qScroller.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
        outgoing = new JTextField(20);
        JButton sendButton = new JButton("Send");
        sendButton.addActionListener(new SendButtonListener());
        mainPanel.add(qScroller);
        mainPanel.add(outgoing);
        mainPanel.add(sendButton);
        setUpNetworking();
 
        /* 
         * Запускаем новый поток, используя вложенный класс в
         * качестве Runnable(задачи)
         * Работа потока заключается в чтении данных с сервера
         * через сокет при выводе любых входящих сообщений
         * в прокручиваемую текстовую область.
         */
        Thread readerThread = new Thread(new IncomingReader());
        readerThread.start();

        frame.getContentPane().add(BorderLayout.CENTER, mainPanel);
        frame.setSize(400, 500);
        frame.setVisible(true);
    }

    private void setUpNetworking() {
        try {
            /* 
             * Используем сокет для получения входящего и исходящего
             * потоков. Исходящий поток уже задействован для отправки данных, 
             * но теперь к нему добавился входящий поток, поэтому 
             * объект Thread может получать сообщения от сервера
             */

            sock = new Socket("127.0.0.1", 5000);
            InputStreamReader streamReader = new 
                InputStreamReader(sock.getInputStream());
            reader = new BufferedReader(streamReader);
            writer = new PrintWriter(sock.getOutputStream());
            System.out.println("networking established");
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    // Вложенный класс, обрабатывающий кнопку Send
    public class SendButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent ev) {
            // Когда пользователь нажимает кнопку Send, 
            // Содержимое текстового поля отправляется на сервер
            try {
                writer.println(outgoing.getText());
                writer.flush();
            } catch (Exception ex) {
                ex.printStackTrace();
            }
            outgoing.setText("");
            outgoing.requestFocus();
        }
    }

    /* 
     * Это работа, которую выполняет поток. 
     * В методе run() поток входит в цикл(пока ответ сервера
     * будет null), считывает за раз одну строку и добавляет ее в 
     * прокручиваемую текстовую область (используя в конце
     * символ переноса строки).
     */
    public class IncomingReader implements Runnable {
        public void run() {
            String message;
            try {
                while((message = reader.readLine()) != null) {
                    System.out.println("read " + message);
                    incoming.append(message + "\n");
                }
            } catch (Exception ex) { ex.printStackTrace(); }
        }
    }
 }