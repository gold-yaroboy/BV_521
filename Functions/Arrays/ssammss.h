#pragma once
#include"constants.h"
#include"stdafx.h"

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MaxValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void ShiftLeft(T arr[], const int n, const int num_of_shifts);
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int num_of_shifts);

template<typename T>void ShiftRight(T arr[], const int n, const int num_of_shifts);
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int num_of_shifts);
