#include<iostream>
using namespace std;

int Sum(int a, int b, int c = 0);			//Прототип функции (Объявление функции - Function declaration)
//int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main(void)
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b, 5);			//Исползование функции (Вызоав функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	//cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	cout << Sum(15, 16) << endl;
}

int Sum(int a, int b, int c)			//Реализация функции (Определение функции - Function definition)
{
	int d = a + b + c;
	return d;
}

int Difference(int a, int b, int c)
{
	return a - b;
}

int Product(int a, int b)
{
	return a * b;
}

double Quotient(int a, int b)
{
	return (double)a / b;
}

/*
-----------------------------------
	Too few arguments in function call - если в функцию передать меньше параметров, чем она принимает;
	Too many arguments in function call - если в функцию передать больше параметров, чем она принимает;
	Function doesn't take 'N' arguments;

	Default parameters - это параметры, у которых есть значения по умолчанию.
	int Sum(int a, int b, int c = 0);

	Redefinition of default parameter.
-----------------------------------
Unresolved Externals
LNK2019: unresolved external symbol found
-----------------------------------
*/