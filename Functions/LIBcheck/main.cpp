#include<iostream>
#include<FillRand.h>
#include<Print.h>
#include<Sort.h>
#include<Statistics.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Sum arr: " << Sum(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
}