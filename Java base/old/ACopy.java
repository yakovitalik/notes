﻿// Пример использования переменной length для копирования массивов
/* В переменной length содержится информация о размере массива */

class ACopy {
	public static void main (String args[]) {
		int i;
		int nums1[] = new int[10];
		int nums2[] = new int[10];
		for (i=0; i < nums1.length; i++)
			nums1[i] = i;

		// Копирование массива nums1 в nums2
		if (nums2.length >= nums1.length)
			for (i=0; i < nums2.length; i++)
				nums2[i] = nums1[i];

		for (i=0; i < nums2.length; i++)
			System.out.println (nums2[i] + " ");

	}
}