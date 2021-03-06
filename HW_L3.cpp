#include <windows.h>
#include "MyLib.h"

#include "List_Ext.h"
#include "Matrix.h"
#include "Range.h"


void Task1()
{
	std::cout << "Работа с Функцией push_back_average:" << std::endl << std::endl;
	std::list<float_t> myList{ 1.1f, 4.3f, 3.f, 4.f, 5.f, 6.5f, 3.2f, 8.3f, 9.f };
	push_back_average(myList);
	for (const auto& i : myList)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void Task2()
{
	std::cout << "Работа с Классом Matrix:" << std::endl << std::endl;
	Matrix mtrx(std::cin);
	std::cout << std::endl;
	mtrx.printMatrix();
	mtrx.printAnswer();
}


void Task3()
{	
	std::cout << "Работа с Классом Range:" << std::endl << std::endl;
	for (const auto& i : Range<int32_t>(10, 20))
		std::cout << i << " ";
	std::cout << std::endl;
	for (const auto& i : Range<float_t>(5, 15, 0.5f))
		std::cout << i << " ";
	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "RU");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = myLib::getUserSelectedTask(3);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		std::cout << std::endl;
	}

    return 0;
}