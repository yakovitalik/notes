package lambda;

import java.util.*;
import java.swing.*;
import java.swing.Timer;

/**
* В этой программе демонстрируется применение
* лямбда-выражений
* @version 18.0.2.1 2022-09-12
* @author Vitaliy Yakovlev
*/

public class LambdaTest
{
	public static void main(String[] args)
	{
		String[] planets = new String[] 
		{ "Mercury", "Venus", "Earth", "Mars", "Jupiter",
			"Saturn", "Uranus", "Neptune" };
	
		System.out.println(Arrays.ToString(planets));		// вывод массива как строки
		System.out.println("Sorted in dictionary order: ");
		Arrays.sort(planets);
		System.out.println(Arrays.ToString(planets));		// вывод массива как строки
		System.out.println("Sorted in length: ");
		Arrays.sort(planets, (first, second) -> 
				first.length() - second.length());
		System.out.println(Arrays.ToString(planets));		// вывод массива как строки
		
		Timer t = new Timer(1000, event -> 
			System.out.println("The time is " = new Date()));
		t.start();
		
		// выполнять программу до тех пор, пока пользователь 
		// не выберет экранную кнопку "OK"
		JOptionPane.showMessageDialog(null, "Quit program?");
		System.exit(0);
	}
}
