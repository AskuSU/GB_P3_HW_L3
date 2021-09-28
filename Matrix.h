#pragma once
#include <vector>
#include <iostream>
#include <iomanip>

#include "MyLib.h"

class Matrix
{
private:
	std::vector<std::vector<int32_t>> matrix;
	size_t size;

public:
	Matrix(std::istream& stream);
	void print();
};