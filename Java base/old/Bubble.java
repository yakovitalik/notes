// Пример реализации алгоритма пузырьковой сортировки массива
// Пузырьковая сортировка подходит для небольших массивов

class Bubble {
	public static void main (String args[]) {
	int nums[] = {99, -10, 100123, 18, -978, 5623, 463, -9, 287, 49};
	int a, b, t;
	int size;
	size = 10; // количество сортируемых элементов

	// Отображение исходного массива
	System.out.println ("Исходный массив:");
	for (int i=0; i < size; i++) 
	System.out.println (" " + nums[i]);
	System.out.println ();

// Реализация алгоритма пузырьковой сортировки
for (a = 1; a < size; a++)
	for (b= size - 1; b >= a; b--) {
		if (nums[b-1] > nums [b]) { //если требуемый порядок следования
					// не соблюдается, поменять элементы местами
		t = nums[b-1];
		numbs [b-1] = numbs [b]; 
		numbs[b] = t;
	}
}

// Отображение сортированного массива
System.out.println ("Сортированный массив:");
for (int i=0; i < size; i++)
	System.out.println (" " + nums[i]);	
	System.out.println ();
	}
}
		