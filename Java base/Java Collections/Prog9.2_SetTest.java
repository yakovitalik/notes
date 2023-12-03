package set;

import java.util.*;

/**
* В этой программе выводятся неповторяющиеся
* слова, введенные в множество из стандартного
* потока System.in
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class SetTest
{
	public static void main(String[] args)
	{
		Set<String> words = new HashSet<>();
			// объект типа HashSet, реализующий хэш-множество
		long totalTime = 0;
		
		try (Scanner in = new Scanner(System.in))
		{
			while(in.hasNext())
			{
				String word = in.next();
				long callTime = System.currentTimeMillis();
				words.add(word);
				callTime = System.currentTimeMillis()
					- callTime;
				totalTime += callTime;
			}
		}
		
		Iterator<String> iter = words.iterator();
		for(int i = 0; i < 20 && iter.hasNext(); i++)
			System.out.println(iter.next());
		System.out.println(". . .");
		System.out.println(words.size() + " disting words." 
				+ totalTime + " miliseconds.");
	}
}