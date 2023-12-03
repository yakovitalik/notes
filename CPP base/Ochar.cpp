// Посимвольный файловый вывод
#include <fstream>
#include <iosteam>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
int main()
{
	string str = "Время - великий учитель, но, увы, " 
	"оно убивает своих учеников. Берлиоз";

	ofstream outfile("TEXT.TXT");			// создать выходной файл
	for(int j = 0; j < str.size(); j++)		// каждый символ
		outfile.put(str[j]);			// записывать в файл
	cout << "Файл записан\n";
	return 0;
}