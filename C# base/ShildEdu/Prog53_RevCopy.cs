// Программа меняет местами содержимое элементов массива

using System;

namespace Program53
{
	class RevCopy
	{
		static void Main()
		{
			int i, j;
			int[] nums 1 = new int[10];
			int[] nums 2 = new int[10];
			
			for(i = 0; i < nums1.Length; i++) nums1[i] = i;
			
			Console.Write("Исходное содержимое массива: ");
			for(i = 0; i < nums2.Length; i++)
				Console.Write(nums1[i] + " ");
			Console.WriteLine();

			// скопировать элементы массива nums1 в массив nums2 в обратном порядке.
			if(nums2.Length >= nums1.Length)	// проверить, достаточно ли длинны массива
								// nums2
			for(i = 0, j = nums1.Length-1; i < nums1.Length; i++, j--)
				nums2[j] = nums1[i];

			Console.WriteLine("Содержимое массива в рбратном порядке: ");
			for(i = 0; i < nums2.Length; i++)
				Console.Write(nums2[i] + " ");
			
			Console.WriteLine();
			
			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}