#include <iostream>
#include <time.h>
int getRandom(int start, int end)
{
	return start + rand() % (end - start + 1);
}
void choice1(int* array, int size, double element, int i);
void choice2(int* array, int size, double element, int i);
void summinus(int* array, int size, double sum1, int i);
void sumplusA(int* array, int size, double sum2, int i, double A);
void part(int* array, int size, double part1_of_a_pair, int i, double part2_of_a_pair);
int main()
{
	std::cout << "введите количество элементов массива: ";
	int* array;
	int size;
	std::cin >> size;
	array = new int[size];
	std::cout << "заполняем клавиатурой или рандомом?" << std::endl << "1.клавиатура " << "2.рандом ";
	double choice;
	std::cin >> choice;
	double element;
	int i;
	if (choice == 1)
	{
		choice1(array, size, element, i);
	}
	if (choice == 2)
	{
		choice2(array, size, element, i);
	}
	double sum1 = 0;
	double sum2 = 0;
	double A;
	std::cout << "Введите значение А ";
	std::cin >> A;
	 summinus( array, size, sum1, i);
	double part1_of_a_pair = 0;
	double part2_of_a_pair;
	part(array, size, part1_of_a_pair, i, part2_of_a_pair);
	std::cout << " сумма отрицательных элементов = " << sum1 << std::endl << " сумма элементов, значения которых положительны и не превосходят заданного числа А = " << sum2 << "номера последней пары соседних элементов с разными знаками=" << part1_of_a_pair << ", " << part2_of_a_pair << std::endl;
	return (0);
}
void choice1(int* arrayD, int size, double element, int i)
{
	for (i = 0; i < size;)
	{
		std::cin >> element;
		arrayD[i] = element;
		i += 1;
	}
}
void choice2(int* arrayD, int size, double element, int i)
{
	for (int i = 0; i < size; ++i)
	{
		arrayD[i] = getRandom(-100, 100);
		i += 1;
	}
}
void summinus(int* array, int size, double sum1, int i)
{
	for (i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			sum1 += array[i];
		}
	}
}
void sumplusA(int* array, int size, double sum2, int i, double A)
{
	for ( i = 0; i < size; i++)
	{
		if (array[i] > 0)
		{
			if (array[i] < A)
			{
				sum2 += array[i];
			}
		}
	}
}
void part(int* array, int size, double part1_of_a_pair, int i, double part2_of_a_pair)
{
	i = size - 1;
	while (part1_of_a_pair == 0)
	{
		if (array[i] > 0)
		{
			part1_of_a_pair = i;
			if (array[i - 1] < 0)
			{
				part2_of_a_pair = i - 1;
			}
		}
		i = i - 1;
	}
}