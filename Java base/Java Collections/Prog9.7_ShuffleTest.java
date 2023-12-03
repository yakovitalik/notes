package shuffle;

import java.util.*;

/**
* В этой программе демонстрируются алгоритмы
* произвольной перетасовки и сортировки
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class ShuffleTest
{
	public static void main(String[] args)
	{
		var numbers = new ArrayList<Integer>();
		for(int i = 0; i <= 49; i++)
			numbers.add(i);
		Collections.shuffle(numbers);
		List<Integer> winningCombination = numbers.subList(0, 6);
		Collections.sort(winningCombination);
		System.out.println(winningCombination);
	}
}