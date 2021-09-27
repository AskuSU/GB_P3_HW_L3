#include <windows.h>

#include "MyLib.h"

#include "List_Ext.h"
//#include "Task2.h"
//#include "Task3.h"


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
	
}


void Task3()
{	
	
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
		cout << endl;
	}

    return 0;
}