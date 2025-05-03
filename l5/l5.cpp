#include <windows.h> 
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	wchar_t file_name[] = L"C:\\Users\\vika\\Documents\\college\\3 course\\mdk 01.04\\glava_30\\Demo.bin";
	int a[10];
	// открываем файл для ввода 
	ifstream in(file_name, ios::in | ios::binary);
	if (!in)
	{
		cerr << "File constructor failed." << endl;
		return 0;
	}
	// вводим финальный массив из файла и выводим на консоль 
	cout << "Final array: ";
	for (int i = 0; i < 10; ++i)
	{
		in.read((char*)&a[i], sizeof(int));
		cout << a[i] << ' ';
	}
	cout << endl;
	// закрываем входной файл 
	in.close();
	// ждем команду на завершение процесса 
	char c;
	cout << "Input any char to exit: ";
	cin >> c;
	return 0;
}
