#include <iostream>
#include <time.h>
int getRandom(int start, int end)
{
	return start + rand() % (end - start + 1);
}
void choice1(int* arrayD, int size, double element, int i);
void choice2(int* arrayD, int size, double element, int i);
void maxminus(int* arrayD, int size, int max_minus, int i, int size_i);
void ArrayA(int* arrayD, int* arrayA, int size, int i, double k);
int main()
{
	std::cout << "введите количество элементов массива: ";
	int* arrayD;
	int size;
	std::cin >> size;
	arrayD = new int[size];
	std::cout << "заполняем клавиатурой или рандомом?" << std::endl << "1.клавиатура " << "2.рандом ";
	double choice;
	std::cin >> choice;
	double element;
	int i;
	if (choice == 1)
	{
		choice1(arrayD, size, element, i);
	}
	if (choice == 2)
	{
		choice2(arrayD, size, element, i);
	}
	int max_minus = -100;
	int size_i = 0;
	 maxminus(arrayD, size, max_minus, i, size_i);
	int* arrayA;
	arrayA = new int[size];
	std::cout << "введите параметр k ";
	double k;
	std::cin >> k;
	ArrayA(arrayD, arrayA, size, i, k);
	for (int i = 0; i < size; i++)
	{
		std::cout << "arrayD [" << i << "]= " << arrayD[i] << "      arrayA [" << i << "]= " << arrayA[i] << std::endl;
	}
}
void choice1(int* arrayD, int size, double element, int i)
{
	for ( i = 0; i < size;)
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
void maxminus(int* arrayD, int size, int max_minus, int i, int size_i)
{
	for ( i = 0; i < size; i++)
	{
		if (arrayD[i] < 0)
		{
			if (arrayD[i] > max_minus)
			{
				max_minus = arrayD[i];
				size_i = i;
			}
		}
	}
	arrayD[size_i] = 0;
}
void ArrayA(int* arrayD, int* arrayA, int size, int i, double k)
{
	for ( i = 0; i < size;)
	{
		if (arrayD[i] < k)
		{
			arrayA[i] = arrayD[i] * arrayD[i] * (-1);
		}
		else
		{
			arrayA[i] = arrayD[i] - 1;
		}
		i += 1;
	}
}