#include "Matrix.h"

Matrix::Matrix(std::istream& stream)
{
	std::cout << "¬ведите размер матрицы: ";
	size = myLib::getUserInput<int32_t>(std::cin).value_or(0);

	matrix.reserve(size);
	for (size_t i = 0; i < size; i++)
	{
		matrix.push_back(std::vector<int32_t>());
		matrix[i].reserve(size);
		for (size_t j = 0; j < size; j++)
		{
			std::optional a = myLib::getUserInput<int32_t>(stream, true, true, false, false);
			if (a) matrix[i].push_back(a.value());
			else
			{				
				std::cout << std::endl;
				for (size_t ii = 0; ii <= i; ii++)
				{
					for (size_t jj = 0; jj < ((ii < i) ? size : j); jj++)
					{
						std::cout << std::setw(3) << matrix[ii][jj] << std::setw(2) << "";
					}
					if (ii < i) std::cout << std::endl;
				}
				j--;
			}
		}
	}
}

void Matrix::print()
{
	for (const auto& i : matrix)
	{
		for (const auto& j : i)
		{
			std::cout << std::setw(3) << j << std::setw(2) << "";
		}
		std::cout << std::endl;
	}		
}
