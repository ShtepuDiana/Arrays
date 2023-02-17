#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	 const int n = 5;
	int arr[n] = {3,5,8};
	//arr[2] = 1024;
	//cout << arr[2] << endl;

	//Ввод елементов массива с клавиатуры
	cout << "Введите елементы масива:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод мвссива на экран в прямом порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//Вывод массива на экран в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вычесление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива" << sum << endl;



}