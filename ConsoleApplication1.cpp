// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	int Time;
	string Name,
			Position;

public: 
	// Спецификатор доступа public
	int Number;

	void Request() //запрос переменной Number (количество человек в таблице)
	{
		cout << "Введите, пожалуйста, количество сотрудников, которые работают на предприятии " << Number << endl;
		// НАДО ЧТО_ТО ПРИДУМАТЬ, ЧТОБЫ ЗАДАТЬ МАССИВ ЧЕРЕЗ ПЕРЕМЕННУЮ, ТОК МАССИВ ДОЛЖЕН БЫТЬ СТРИНГОВЫМ, А НЕ ЦЕЛОЧИСЛЕННЫМ
	}
	
	Employers(int Time1, string Position1, string Name1 ) // конструктор класса
	{
		mAss(Time1, Position1, Name1); // вызов функции заполнения массива
	}

	void mAss(int Time1, string Position1, string Name1, int N1) // заполнение массива
	{
		for (int i = 0; i < Number; i++)
		{
			cout << "Введите, пожалуйста, ФИО сотрудника " << Name1 << "количество проработанных часов " << Time1 << "и его должность " << Position1 << endl;
			Name = Name1;
			Time = Time1;
			Position = Position1;
		}
	}

}

int main()
{
    return 0;
}

