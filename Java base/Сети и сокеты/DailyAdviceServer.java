// Серверный клиент Приложения-советчика

/* Программа создает ServerSocket и ожидает клиентские запросы.
 * При получении такого запроса(когда клиент выполнил для этого 
 * приложения new Socket()) сервер создает объект Socket и устанавливает соединение
 * с этим клиентом. Сервер создает экземпляр PrintWriter(с помощью исходящего
 * потока из сокета) и отправляет клиенту сообщение.
 */

 import java.io.*;
 import java.net.*;

 public class DailyAdviceServer {
    String[] adviceList = { "Ешьте меньшими порциями", 
    "Купите облегающие джинсы. Нет, оин не сделают вас полнее", "Два слова: не годится", 
    "Будьте честны хотя бы сегодня. Скажите своему начальнику все, что вы на самом деле о нем думаете.", 
    "Возможно, вам стоит подобрать другую прическу." };

    public void go() {
        try {
            ServerSocket serverSock = new ServerSocket(4242);

            // Сервер входит в постоянный цикл ожидания клиентских подключений (и обслуживает их).
            while(true) {
                Socket sock = serverSock.accept();
                // Метод accept() блокирует приложение, до тех пор, пока не поступит запрос, 
                // после чего возвращает сокет(на анонимном порту) для взаимодействия с клиентом.

                // Теперь мы испоьзуем соединение объекта Socket с клиентом для создания
                // экземпляра PrintWriter, после чего отправляем с его помощью (println())
                // строку с советом. Затем мы закрываем сокет, так как работа с клиентом закончена.
                PrintWriter writer = new PrintWriter(sock.getOutputStream());
                String advice = getAdvice();
                writer.println(advice);
                writer.close();
                System.out.println(advice);
            }

        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    private String getAdvice() {
        int random = (int) (Math.random() * adviceList.length);
        return adviceList[random];
    }

    public static void main(String[] args) {
        DailyAdviceServer server = new DailyAdviceServer();
        server.go();
    }
 }