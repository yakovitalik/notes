/* Приложение с коллекционными карточками */

import java.util.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.AncestorListener;

import java.awt.*;
import java.io.*;

public class QuizCardBuilder {
    private JTextArea question;
    private JTextArea answer;
    private ArrayList<QuizCard> cardList;
    private JFrame frame;

    public static void main(String[] args) {
        QuizCardBuilder builder = new QuizCardBuilder();
        builder.go();
    }

    // Весь код метода строит GUI
    public void go() {
        frame = new JFrame("Quiz Card Builder");
        JPanel mainPanel = new JPanel();
        Font bigFont = new Font("sanserif", Font.BOLD, 24);
        question = new JTextArea(6, 20);
        question.setLineWrap(true);
        question.setWrapStyleWord(true);
        question.setFont(bigFont);

        JScrollPane qScroller = new JScrollPane(question);
        qScroller.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
        qScroller.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);

        answer = new JTextArea(6, 20);
        answer.setLineWrap(true);
        answer.setWrapStyleWord(true);
        answer.setFont(bigFont);

        JScrollPane aScroller = new JScrollPane(answer);
        aScroller.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
        aScroller.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);

        JButton nextButton = new JButton("Netx Card");

        cardList = new ArrayList<QuizCard>();

        JLabel qLabel = new JLabel("Question:");
        JLabel aLabel = new JLabel("Answer:");

        mainPanel.add(qLabel);
        mainPanel.add(qScroller);
        mainPanel.add(aLabel);
        mainPanel.add(aScroller);
        mainPanel.add(nextButton);
        nextButton.addActionListener(new NextCardListener());

        /* Создаем объект JMenuBar и добавляем в него меню File, 
         * с пунктами New(Создать) и Save(Сохранить). Затем говорим
         * главной панели, что она должна использовать JMenuBar. 
         * пункты меню могут запускать ActionEvent
         */
        JMenuBar menuBar = new JMenuBar();
        JMenu fileMenu = new JMenu("File");
        JMenuItem newMenuItem = new JMenuItem("New");
        JMenuItem saveMenuItem = new JMenuItem("Save");
        newMenuItem.addActionListener(new SaveMenuListener());
        fileMenu.add(newMenuItem);
        fileMenu.add(saveMenuItem);
        menuBar.add(fileMenu);
        frame.setJMenuBar(menuBar);
        frame.setContentPane().add(BorderLayout.CENTER, mainPanel);
        frame.setSize(500, 600);
        frame.setVisible(true);
    }

    public class NextCardListener implements ActionListener {
        public void actionPerfomed(ActionEvent ev) {
            QuizCard card = new QuizCard(question.getText(), answer.getText());
            cardList.add(card);
            clearCard();
        }
    }

    public class SaveMenuListener implements AncestorListener {
        public void actionPerfomed(ActionEvent ev) {
            QuizCard card = new QuizCard(question.getText(), answer.getText());
            cardList.add(card);

            // Вызывается диалоговое окно и программа останавливается на 
            // этой строке, пока пользователь не выберет меню Save. 
            // Всю навигацию, выбор файла и т.д. за вас выполняет класс
            // JFileChooser
            JFileChooser fileSave = new JFileChooser();
            fileSave.showSaveDialog(frame);
            saveFile(fileSave.getSelectedFile());

        }
    }

    public class NewMenuListener implements ActionListener {
        public void actionPerfomed(ActionEvent ev) {
            cardList.clear();
            clearCard();
        }
    }

    private void clearCard() {
        question.setText("");
        answer.setText("");
        question.requestFocus();
    }
    
    // Метод, который непосредственно записывает файл
    // Вызывается обработчиком событий класса SaveMenuListener
    private void saveFile(File file) {
        try {
            BufferedWriter writer = new BufferedWriter(new FileWriter(file));

            for(QuizCard card:cardList) {
                writer.write(card.getQuestion() + "/");
                writer.write(card.getAnswer() + "\n");
            }
            writer.close();
        } catch (IOException ex) {
            System.out.println("couldn't write the cardList out");
            ex.printStackTrace();
        }
    }
}