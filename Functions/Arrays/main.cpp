#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"ssammss.h"
#include"ssammss.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	int num_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> num_of_shifts;
	ShiftLeft(arr, n, num_of_shifts);
	Print(arr, n);
	ShiftRight(arr, n, num_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов: "; cin >> num_of_shifts;
	ShiftLeft(brr, SIZE, num_of_shifts);
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, num_of_shifts);
	Print(brr, SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 0, 10);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов: "; cin >> num_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, num_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, num_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}