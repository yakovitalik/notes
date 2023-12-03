/* Программа демонстрирует сериализацию
(сохранение в файл) объекта.  */

import java.io.*;

public class Box implements Serializable {

    // эти два значения будут сохранены
    private int width;
    private int height;

    public void setWidth(int w) {
        width = w;
    }

    public void setHeight(int h) {
        height = h;
    }

    public static void main(String[] args) {
        Box myBox = new Box();
        myBox.setWidth(50);
        myBox.setHeight(20);

        // Операции ввода-вывода могут вызвать исключения
        try {
            // Соединяем с файлом с имененем foo.ser. Если его не
            // существует - он будет создан
            FileOutputStream fs = new FileOutputStream("foo.ser");

            // Связываем ObjectOutputStream с потоком соединения
            ObjectOutputStream os = new ObjectOutputStream(fs);

            // записать объект
            os.writeObject(myBox);

            // закрываем поток(файл закроется автоматически)
            os.close();
        } catch(Exception ex) {
            ex.printStackTrace();
        }
    }
}