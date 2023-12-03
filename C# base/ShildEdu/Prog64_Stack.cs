// Класс для хранения символов в стеке
using System;

namespace Program64
{
	class Stack
	{
		// Эти члены класса являются закрытыми
		char[] stck; 		// массив, содержащий стек
		int tos;		// индекс вершины стека

		// Построить пустой класс Stack для реализации стека заданного размера
		public Stack(int size)
		{
			stck = new char[size];	// распределить память для стека
			tos = 0;
		}

		// поместить символы в стек
		public void Push(char ch)
		{
			if(tos == stck.Length)
			{
				Console.WriteLine(" - Стек заполнен.");
				return;
			}

			stck[tos] = ch;
			tos++;
		}

		// Извлечь символ из стека
		public char Pop()
		{
			if(tos == 0)
			{
				Console.WriteLine(" - Стек пуст.");
				return (char) 0;
			}
			tos--;
			return stck[tos];
		}

		// Возвратить значение true, если стек заполнен
		public bool IsFull()
		{
			return tos == stck.Length;
		}

		// Возвратить значение true, если стек пуст
		public bool IsEmpty()
		{
			return tos == 0;
		}

		// Возвратить общую емкость стека
		public int Capacity()
		{
			return stck.Length;
		}

		// Возвратить количество объектов, находящихся в данный момент в стеке
		public int GetNum()
		{
			return tos;
		}
	}
}