package pair1;

/**
* В этой программе демонстрируется применение
* обобщенных классов
* @version 18.0.2.1 2022-09-13
* @author Vitaliy Yakovlev
*/

public class PairTest1
{
	public static void main(String[] args)
	{
		String[] words = 
			{ "Mary", "had", "a", "little", "lamb" };
			
		Pair<String> mm = ArrayAlg minmax(words);
		System.out.println("min = " + mm.getFirst());
		System.out.println("max = " + mm.getSecond());
	}
}

class ArrayAlg
{
	/**
	* Получает символьные строки с минимальным и
	* максимальным значениями среди элементов массива
	* @param a Массив символьных строк
	* @return	Пара минимального и максимального значений 
	*			или пустое значение, если параметр а имеет
	* 			пустое значение
	*/
	
	public static Pair<String> ninmax(String[] a)
	{
		if(a == null || a.length == 0) return null;
		String min = a[0];
		String max = a[0];
		for(int i = 1; i < a.length;i++)
		{
			if(min.compareTo(a[i]) > 0) min = a[i];
			if(max.compareTo(a[i]) > 0) max = a[i];
		}
		return new Pair<>(min, max);
	}
}