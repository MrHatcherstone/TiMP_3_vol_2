﻿// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
//classes.cpp:

#include <iostream>
#include "stdafx.h"
#include <string>
#include <array>

using namespace std;
// Объявляем первый класс (Ввод Данных о сотрудниках)
class Employers
{
private: 
	// Объявление внутренних переменных
	int Time,
		Position,
		Number;
	string Name;
	string mArr[100][4];

public: 
	// Спецификатор доступа public
	int Number1;
	void Request() //запрос переменной Number (количество человек в таблице)
	{
		cout << "Введите, пожалуйста, количество сотрудников, которые работают на предприятии " << Number << endl;
		Number1 = Number;
	}

	Employers(int Time1, int Position1, string Name1 ) // конструктор класса
	{
		mAss(Time1, Position1, Name1); // вызов функции заполнения массива
	}

	void mAss(int Time1, int Position1, string Name1, int N1) // заполнение массива
	{
		for (int i = 0; i < Number; i++)
		{
			cout << "Введите, пожалуйста, ФИО сотрудника " << Name1 << "количество проработанных часов " << Time1 << "и его должность " << Position1 << endl;
			Name = Name1;
			Time = Time1;
			Position = Position1;
			mArr[Number][0] = Name;
			mArr[Number][1] = Time;
			mArr[Number][2] = Position*5 + 5;
		}
	}
};
// Конец объявления класса 

// Объявляем второй класс (Бюджет)
class Budget
{
private:
	// Объявление внутренних переменных
	long budg,
		budgbalance;
	int convertionl;

public:
	// Спецификатор доступа public
	
	void Readbudg() // Запрос бюджета
	{
		cout << "Введите, пожалуйста, бюджет" << budg << endl;
	}

	void CountBalance() // Полсчёт остатка бюджета
	{

	}
};

// Класс обработки данных
class Treatment : public Employers
{
private:
	// Объявление внутренних переменных
	int SumHour,
		Salary;

public:
	// Спецификатор доступа public
	
	void HourSummer()
	{
		for (int z = 0;z < Number1; z++)
			SumHour = SumHour + mArr
	}
};

int main()
{
    return 0;
}

