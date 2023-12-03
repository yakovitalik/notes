// программа разбора арифметических выражений

#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;			// максимальная длинна выражения
const int MAX = 40;
//////////////////////////////////////////////////////////////////////////////
class Stack
{
	private:
		char st[MAX];		// массив данных
		int top;		// количество сохраненных данных
	public:
		Stack()			// констуктор
			{ top = 0; }
		void push(char var)	// поместить в стек
			{ st[++top] = var; }
		char pop()		// взять из стека
			{ return st[top--]; }
		int gettop()		// узнать количество элементов
			{ return top; } 
};
//////////////////////////////////////////////////////////////////////////////
class express()
{
private:
	Stack s;			// стек данных
	char* pStr;			// строка для ввода
	int len;			// длина строки
public:
	express(char* ptr)		// конструктор
	{
		pStr = ptr;		// запоминает указатель на строку
		len = strlen(pStr);	// устанавливаем длинну
	}
	void parse();			// разбор выражения
	int solve();			// получение результата
}
//////////////////////////////////////////////////////////////////////////////
void express::parse()			// добавляем данные в стек
{
	char ch;			// символ из строки
	char lastval;			// последнее значение
	char lastop;			// последний оператор
	for(int j = 0; j < len; j++)	// для всех символов в строке
	{
		ch = pStr[j];		// получаем символ
		
		if(ch >= '0' && ch <= '9')	// если это цифра
			s.push(ch - '0');	// то сохраняем ее значение
		else 			// иначе
		{
			
		}
	}
	
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
	Stack s1;
	
	s1.push(11);
	s1.push(22);
	cout << "1: " << s1.pop() << endl;
	cout << "2: " << s1.pop() << endl;
	s1.push(33);
	s1.push(44);
	s1.push(55);
	s1.push(66);
	cout << "3: " << s1.pop() << endl;
	cout << "4: " << s1.pop() << endl;
	cout << "5: " << s1.pop() << endl;
	cout << "6: " << s1.pop() << endl;
	return 0;
}