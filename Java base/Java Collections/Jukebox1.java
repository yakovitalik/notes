/* 
 * Программа загружает названия песен из файла
 * SogList.txt в ArrayList для последующей сортировки
 */

import java.io.*;
import java.util.*;

public class Jukebox1 {
    // Будем хранить названия песен в списке ArrayList
    // состоящем из строковых данных
    ArrayList<String> songList = new ArrayList<String>();

    public static void main(String[] args) {
        new Jukebox1().go();
    }
    // Загружаем файл и выводим содержимое sonList(ArrayList).
    public void go() {
        getSongs();
        System.out.println(songList);

        // Добавляем сортировку
        Collections.sort(songList);
        System.out.println(songList);
    }

    // Считываем файл и вызываем для каждой его строки метод addSong()
    void getSongs() {
        try {
            File file = new File("SongList.txt");
            BufferedReader reader = new BufferedReader(new FileReader(file));
            String line = null;
            while((line = reader.readLine()) != null) {
                addSong(line);
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    /* 
     * Разбиваем строку (содержащую как название, так и имя исполнителя)
     * на две части(лексемы) с помощью метода split()
     */
    void addSong(String lineToParse) {
        String[] tokens = lineToParse.split("/");
        songList.add(tokens[0]);
        // нам нужно только название песни, поэтому добавляем
        // в songList только первую лексему
    }
}