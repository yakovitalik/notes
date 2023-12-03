imporn java.util.*;

/**
* В этой программе демонстрируется обращение с массивами
* 
* @version 18.0.2.1 2022-08-30
* @author Vitaliy Yakovlev
*/

public class LotteryDrawing
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		
		System.out.print("How many numbers do you " 
						+ "need to draw? ");
		
		int n = in.nextInt();
		
		System.out.print("What is the highest number you "
						+ "can draw? ");
		int n = in.nextInt();
		
		// Заполнить массив числами 1 2 3 ... n
		int[] numbers = new int[n];
		for(int i = 0; i < numbers.length; i++)
			numbers[i] = i + 1;
		
		// выбрать k номеров и ввести их во второй массив
		int[] result = new int[k];
		for(int i = 0; i < result.length; i++)
		{
			// получить случайный индекс
			// в пределах от 0 до n-1
			int r = (int) (Math.random() * n);
			
			// выбрать элемент из произвольного места
			result[i] = numbers[r];
			
			// переместить последний элемент
			// в произвольное место
			numbers[r] = numbers[n-1];
			n--;
		}
		
		// Вывести отсортированный массив
		Array.sort(result);
		System.out.println("Bet be following " 
						+ "combination. It'll make you rich!");
		for(int r : result)
			System.out.println(r);
	}
}