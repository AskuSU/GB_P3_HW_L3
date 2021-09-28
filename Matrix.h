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
	std::optional<int64_t> determinant;
	std::vector<Matrix> minors;

protected:
	Matrix(const Matrix& prevMatrix, const size_t& expansion_string_element_index);
	void calculate();

public:
	Matrix(std::istream& stream);

	void printMatrix();
	void printAnswer();
};