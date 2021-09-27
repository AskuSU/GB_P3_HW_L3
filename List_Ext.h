#pragma once

#include <list>

template <typename T>
void push_back_average(std::list<T>& lst)
{
	T average = 0;
	for (const auto& elem : lst)
	{
		average += elem;
	}
	lst.push_back(average / static_cast<T>(lst.size()));
}