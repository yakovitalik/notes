/* Использование ключевого слова volatile
 * 
 */

import java.util.Scanner;

public class Test2
{
	public static void main(String[] args)
	{
		MyThread myThread = new MyThread();
		myThread.start();

		Scanner scanner = new Scanner(System.in);
		scanner.nextLine();			// ждет ожидания клавиши Enter

		myThread.shutdown();		// после нажатия Enter метод shotdown
									// меняет значение MyThread.running с true 
									// на false, что выходит из цикла while
									// и сотанавливает поток myThread
	}
}

class MyThread extends Thread {

	private volatile boolean running = true;	// volatile отменеяет кэширование переменной

	public void run() {
		while(running) {
			System.out.println("Hello");
			try {
				Thread.sleep(100);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			
		}
	}

	public void shutdown() {
		this.running = false;
	}
}