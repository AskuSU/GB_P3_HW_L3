#pragma once
#include <vector>
#include <iostream>

class Matrix
{
private:
	std::vector<std::vector<int32_t>> matrix;

public:
	Matrix(const size_t& size, std::istream& stream);
	void print();
};