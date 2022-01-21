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
* \brief Замена максимального отрицательного на ноль
* \param max_minus максимальное отрицательное число
* \param size_i номер максимального отрицательного числа
* \return 0
*/
void maxminus(const size_t size, int max_minus, int size_i);
/**
* \brief появление ещё одного массива
* \param  k условие для параметра
* \return новый массив
*/
void newarray(const size_t size, double k);
int main()
{
	std::cout << "введите количество элементов массива: ";
	int size;
	std::cin >> size;
	int* arrayD = new int[size];
	std::cout << "заполняем клавиатурой или рандомом?" << std::endl << "1.клавиатура " << "2.рандом ";
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
		arrayD = getRandomInputArray(size);
	}
	int max_minus = -100;
	int size_i = 0;
	maxminus( size, max_minus, size_i);
	int* arrayA = new int[size];
	std::cout << "введите параметр k ";
	double k;
	std::cin >> k;
	newarray( size, k);
	for (int i = 0; i < size; i++)
	{
		std::cout << "arrayD [" << i << "]= " << arrayD[i] << "     arrayA [" << i << "]= " << arrayA[i] << std::endl;
	}
}
int getRandomInputArray(const size_t size, const int minValue, const int maxValue)
{
	std::random_device random;
	std::mt19937 gen(random());
	const std::uniform_int_distribution<int> uniformDistrinbution(minValue, maxValue);

	int* arrayD = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arrayD[i] = uniformDistrinbution(gen);
	}
}
void keyboard(const size_t size, double element)
{
	int* arrayD = new int[size];
	for (size_t i = 0; i < size;i++)
	{
		std::cin >> element;
		arrayD[i] = element;
	}
}
void maxminus(const size_t size, int max_minus, int size_i)
{
	int* arrayD = new int[size];
	for (size_t i = 0; i < size; i++)
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
void newarray(  const size_t size, double k)
{
	int* arrayD = new int[size];
	int* arrayA = new int[size];
	for (size_t i = 0; i < size;i++)
	{
		if (arrayD[i] < k)
		{
			arrayA[i] = arrayD[i] * arrayD[i] * (-1);
		}
		else
		{
			arrayA[i] = arrayD[i] - 1;
		}
	}
}