// Программа - советчик

/* Программа создает сокет и объект BufferedRead с помощью 
 * других потоков, а затем считывает одну строку, которую ей
 * передает серверное приложение, работающее на порту 4242.
*/

import java.io.*;
import java.net.*;
// Класс Socket из java.net

public class DailyAdviceClient {
    public void go() {
        try {
            // Создаем соединение через сокет к приложению, 
            // работающему на порту 4242, на том же компьютере(localhost)
            Socket s = new Socket("127.0.0.1", 4242);

            InputStreamReader streamReader = 
            new InputStreamReader(s.getInputStream());

            // Подключаем BufferedRead к InputStreamReader
            // который в свою очередь уже соединен с исходящим потоком сокета
            BufferedReader reader = new BufferedReader(streamReader);

            String advice = reader.readLine();
            System.out.println("Сегодня ты должен: " + advice);

            reader.close();     // здесь закрываются все потоки
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }

    public static void main(String[] args) {
        DailyAdviceClient client = new DailyAdviceClient();
        client.go();
    }
}