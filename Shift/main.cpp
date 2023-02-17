#include<iostream>
#include<Windows.h>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//Вывод исходного масива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Сдвиг масива на заданное число элементов:
	int number_of_shifts;
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];//В текущий элемент масива ложим следующий элемент
		}
		arr[n - 1] = buffer;

		system("CLS");
		//Вывод сдвинутого масива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(500);//Функция Sleep() приостонавливает выполнениепрограммы на заданное число миллисекунд

	}


}