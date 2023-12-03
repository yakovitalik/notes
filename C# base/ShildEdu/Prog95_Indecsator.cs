﻿// Использование индексатора для создания отказоустойчивого массива

using System;

namespace Program95
{
	class FailSoftArray
	{
		int[] a;				// ссылка на базовый массив
		public int Length;		// открытая переменная длинны массива
		public bool ErrFlag;	// обозначает результат последней операции

		// построить массив заданного размера
		public FailSoftArray(int size)
		{
			a = new int[size];
			Length = size;
		}

		// Это индексатор для класса FailSoftArray
		public int this[int index]
		{
			// Это аксессор get
			get 
			{
				if(ok(index))
				{
					ErrFlag = false;
					return a[index];
				}
				else
				{
					ErrFlag = true;
					return 0;
				}
			}

			// это аксессор set
			set
			{
				if(ok(index))
				{
					a[index] = value;
					ErrFlag = false;
				}
				else ErrFlag = true;
			}
		}

		// Возвратить логическое значение true, если 
		// индекс находится в установленных границах
		private bool ok(int index)
		{
			if(index >= 0 & index < Length) return true;
			return false;
		}
	
	}

	// Продемонстрировать применение отказоустойчивого массива

	class FSDemo
	{
		static void Main()
		{
			FailSoftArray fs = new FailSoftArray();
			int x;

			// выявить скрытые сбои
			Console.WriteLine("Скрытый сбой.");
			for(int i = 0; i < (fs.Length * 2); i++)
				fs[i] = i * 10;
			for(int i = 0; i < (fs.Length * 2); i++) 
			{
				x = fs[i];
				if(x != -1) Console.Write(x + " ");
			}
			
			Console.WriteLine();

			// А теперь показать сбои
			Console.WriteLine("\nСьой с уведомлением об ошибках");
			for(int i = 0; i < (fs.Length * 2); i++)
			{
				fs[i] = i * 10;
				if(fs.ErrFlag)
					Console.WriteLine("fs[" + i + "] вне границ");
			}
			
			for(int i = 0; i < (fs.Length * 2); i++)
			{
				x = fs[i];
				if(!fs.ErrFlag) Console.Write(x + " ");
				else
					Console.WriteLine("fs[" + i + "] вне границ");
			}

			// Для того чтобы консоль сразу не закрывалась
			Console.WriteLine("Нажмите <Enter> для выхода...");
			Console.Read();
		}
	}
}