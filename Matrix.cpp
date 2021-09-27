#include "Matrix.h"

Matrix::Matrix(const size_t& size, std::istream& stream)
{
	matrix.reserve(size);
	for (size_t i = 0; i < size; i++)
	{
		matrix.push_back(std::vector<int32_t>());
		matrix[i].reserve(size);
		for (size_t j = 0; j < size; j++)
		{
			int32_t a;
			stream >> a;
			matrix[i].push_back(a);
		}
	}
}

void Matrix::print()
{
	for (const auto& i : matrix)
	{
		for (const auto& j : i)
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}		
}
