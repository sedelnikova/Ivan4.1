﻿// Ivan4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1. Дано значение угла α в градусах (0 < α < 360).
// Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, r;
	cout << "Введите значение угла в градусах :) ";
	cin >> a;
	r = (a * 3.14) / 180;

	cout << "Значение угла а в радианах = " <<r << endl;

	return 0;
}