// Демонстрация математических операций

import java.util.*;

public class MathOps {
	public static void main(String[] args) {
		
		// Создание и раскрутка генератора случайных чисел
		Random rand = new Random(47);
		
		int i, j, k;
		
		// Выбор значения от 1 до 100
		j = rand.nextInt(100) + 1;
		System.out.println("j: " + j);
		
		k = rand.nextInt(100) + 1;
		System.out.println("k: " + k);
		
		i = j + k;
		System.out.println("j + k : " + i);
		
		i = j - k;
		System.out.println("j - k : " + i);
		
		i = k / j;
		System.out.println("k / j : " + i);
		
		i = k * j;
		System.out.println("k * j : " + i);
		
		i = k % j;
		System.out.println("k % j : " + i);
		
		j %= k;
		System.out.println("j %/ : " + j);
		
		// Тесты для вещественных чисел
		float u, v, w;		// так же можно использовать double
		v = rand.nextFloat();
		System.out.println("v : " + v);
		
		w = rand.nextFloat();
		System.out.println("w : " + w);
		
		u = v + w;
		System.out.println("v + w : " + u);
		
		u = v - w;
		System.out.println("v - w : " + u);
		
		u = v * w;
		System.out.println("v * w : " + u);
		
		u = v / w;
		System.out.println("v / w : " + u);
		
		// следующее так же относится к типам char, byte, short, int, long, double
		u += v;
		System.out.println("u += v : " + u);
		
		u -= v;
		System.out.println("u -= v : " + u);
		
		u *= v;
		System.out.println("u *= v : " + u);
		
		u /= v;
		System.out.println("u /= v : " + u);
	}
}