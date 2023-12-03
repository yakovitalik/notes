// Программа демонстрирует запись в текстовый файл

import java.io.*;

class WriteAFile {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("Foo.text");
            // Если файла Foo.text не существует, он будет создан

            // метод write() принмает строку
            writer.write("Привет, Фу!");

            // его нужно закрыть по завершении записи
            writer.close();

        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}