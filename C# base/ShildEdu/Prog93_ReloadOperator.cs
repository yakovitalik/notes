// Пример перегрузки бинарных операторов

using Program1;
using System;

namespace Program1
{
    class ThreeD
    {
        int x, y, z;        // трехмерные координаты

        public ThreeD() { x = y = z = 0; }
        public ThreeD(int i, int j, int k) { x = i; y = j; z = k; }

    // Перегрузить бинарный оператор +
    public static ThreeD operator +(ThreeD op1, ThreeD op2)
    {
        ThreeD result = new ThreeD();

        // сложить координаты двух точек и возвратить результат
        result.x = op1.x + op2.x;   // эти операторы выполняют
        result.y = op1.y + op2.y;   // целочисленное сложение,
        result.z = op1.z + op2.z;   // сохраняя свое исходное значение

        return result;
    }
    // Перегрузить бинарный оператор -
    public static ThreeD operator -(ThreeD op1, ThreeD op2)
    {
        ThreeD result = new ThreeD();

        // Обращаем внимание на порядок следования операндов:
        // op1 - левый операнд, а op2 - правый операнд
        result.x = op1.x - op2.x;   // эти операторы выполняют
        result.y = op1.y - op2.y;   // целочисленное сложение,
        result.z = op1.z - op2.z;   // сохраняя свое исходное значение

        return result;
    }

    // Вывести координаты X, Y, Z
    public void Show()
    {
        Console.WriteLine(x + ", " + y + ", " + z);
    }
}
class ThreeDDemo
{
    static void Main()
    {
        ThreeD a = new ThreeD(1, 2, 3);
        ThreeD b = new ThreeD(10, 10, 10);
        ThreeD c;

        Console.WriteLine("Координаты точки a: ");
        a.Show();
        Console.WriteLine();

        Console.WriteLine("Координаты точки b: ");
        b.Show();
        Console.WriteLine();

        c = a + b;      // сложить координаты точек a и b
        Console.Write("Результат сложения точек a + b: ");
        c.Show();
        Console.WriteLine();

        c = a + b + c;  // сложить координаты точек a, b и c
        Console.Write("Результат сложения точек a, b, c: ");
        c.Show();
        Console.WriteLine();

        c = c - a;      // вычесть координаты точки a
        Console.Write("Результат вычитания c - a: ");
        c.Show();
        Console.WriteLine();

        c = c - b;      // вычесть координты точки b
        Console.Write("Результат вычитания c - b: ");
        c.Show();
        Console.WriteLine();

        // Для того чтобы консоль сразу не закрывалась
        Console.WriteLine("Нажмите <Enter> для выхода...");
        Console.Read();
    }
}
}