// 6,2int.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size_i, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size_i - 1)
		Create(a, size_i, Low, High, i + 1);
}

void Print(int* a, const int size_i, int i)
{
	cout << setw(4) << a[i];
	if (i < size_i - 1)
		Print(a, size_i, i + 1);
	else
		cout << endl;
}


int Min(int* a, const int size_i, int min, int imin)
{
	if (a[size_i] < min)
	{
		min = a[size_i];
		imin = size_i;
	}
	if (size_i < size_i - 1)
		return Min(a, size_i, min, imin);
	else
		return imin;
}

int Sum(int* a, const int size_i, int S, int min, int imin)
{
	S = Min(a, size_i, min, imin);
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];

	int Low = -12;
	int High = 30;

	int S = 0;
	int min = 0;
	int imin = -1;

	Create(a, n, Low, High, 0);
	cout << "Original masive" << endl;
	Print(a, n, 0);
	cout << endl;

	cout << "Calculating imin" << endl;
	cout << "imin = " << Min(a, n, min, imin) << endl;
	cout << endl;

	cout << "Calculacting sum" << endl;
	cout << "S = " << Sum(a, n, 0, min, imin) << endl;
	cout << endl;

	system("pause");
	return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
