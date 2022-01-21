#include <iostream>
#include <cmath>
#include <random>
/**
* \brief Заполнение массива случайными числами.
* \param size Длина массива.
* \param minValue Минимальное значение массива.
* \param maxValue Максимальное значение массива.
* \return Массив.
*/
int getRandomInputArray(const size_t size, const int minValue = -100, const int maxValue = 200);
/**
* \brief Заполнение массива с помощью клавиатуры
* \param size Длина массива.
* \param element элемент
* \return Массив.
*/
void keyboard(const size_t size, double element);
/**
* \brief найти сумму отрицательных чисел
* \param sum1 сумма
* \return sum1
*/
int sum_minus(int* array, const size_t size, double sum1);
/**
* \brief найти сумму от 0 до А
* \param sum2 сумма
* \param А число А
* \return sum1
*/
void sumplusA(int* array, int size, double sum2, int i, double A);

void part(int* array, int size, double part1_of_a_pair, int i, double part2_of_a_pair);
int main()
{
	std::cout << "введите количество элементов массива: ";
	int* array;
	const size_t size
	std::cin >> size;
	array = new int[size];
	std::cout << "заполняем клавиатурой или рандомом?" << std::endl << "1.клавиатура  " << "2.рандом ";
	double choice;
	std::cin >> choice;
	double element;
	int i;
	if (choice == 1)
	{
		keyboard(size, element);
	}
	if (choice == 2)
	{
		array = getRandomInputArray(size);
	}
	double sum1 = 0;
	double sum2 = 0;
	double A;
	std::cout << "Введите значение А ";
	std::cin >> A;
	sum_minus(array, size, sum1, i);
	double part1_of_a_pair = 0;
	double part2_of_a_pair;
	part(array, size, part1_of_a_pair, i, part2_of_a_pair);
	std::cout << " сумма отрицательных элементов = " << sum1 << std::endl << " сумма элементов, значения которых положительны и не превосходят заданного числа А = " << sum2 << "номера последней пары соседних элементов с разными знаками=" << part1_of_a_pair << ", " << part2_of_a_pair << std::endl;
	return (0);
}
int getRandomInputArray(const size_t size, const int minValue, const int maxValue)
{
	std::random_device random;
	std::mt19937 gen(random());
	const std::uniform_int_distribution<int> uniformDistrinbution(minValue, maxValue);

	int* array = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = uniformDistrinbution(gen);
	}
}
void keyboard(const size_t size, double element)
{
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> element;
		array[i] = element;
	}
}
void sum_minus(int* array, const size_t size, double sum1)
{
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			sum1 += array[i];
		}
	}
}
void sumplusA( int size, double sum2, double A)
{
	int* array = new int[size];
	for (int i = 0; i < size; i++)
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
void part(int size, double part1_of_a_pair, double part2_of_a_pair)
{
	int* array = new int[size];
	int i = size - 1;
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