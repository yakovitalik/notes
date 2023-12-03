/* 
 * Версия Jukebox с использованием Comparator
 * Программа загружает названия песен из файла
 * SogList.txt в ArrayList
 * Позволяет сортировать список песен по названию и исполнителю.
 */

import java.io.*;
import java.util.*;

public class Jukebox5 {
    // Будем хранить названия песен в списке ArrayList
    // состоящем из строковых данных
    ArrayList<String> songList = new ArrayList<String>();

    public static void main(String[] args) {
        new Jukebox5().go();
    }

    // Создаме новый вложенный класс, реализующий Comparator
    class ArtistCompare implements Comparator<Song> {
        public int compare(Song one, Song two) {
            return one.getArtist().compareTo(two.getArtist());
            // Т.е. фактически выполняем сравнение строковых объектов
        }
    }

    // Загружаем файл и выводим содержимое sonList(ArrayList).
    public void go() {
        getSongs();
        System.out.println(songList);

        // Добавляем сортировку
        Collections.sort(songList);
        System.out.println(songList);

        // Создаем экземпляр вложенного класса Comparator.
        ArtistCompare artistCompare = new ArtistCompare();
        Collection.sort(songList, artistCompare);
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