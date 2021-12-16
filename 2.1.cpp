#include <iostream>
#include <cmath>
enum numbers
{ 
    first,
    second,
};
/**
 * \brief Функция для расчета arithmetic_mean_of_cubes
 * \param first Параметр first
 * \param second Параметр second
 * \return 
 */
double Getarithmetic_mean_of_cubes(const double first, const double second);
/**
 * \brief Функция для расчета b
 * \param first Параметр first
 * \param y Параметр y
 * \return 
 */
double Getaverage_of_modules(const double first, const double second);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{ 
    std::cout << "Введите первое число: ";
    double first;
    std::cin >> first ;
    std::cout << "Введите второе число: ";
    double second;
    std::cin >> second;
    double z, x;
    z = fabs(first);
    x = fabs(second);
    const auto arithmetic_mean_of_cubes = Getarithmetic_mean_of_cubes(first, second);
    const auto average_of_modules = Getaverage_of_modules(first, second);
    std::cout<<"среднее арифметическое кубов этих чисел =" <<arithmetic_mean_of_cubes<< std::endl<<"среднее геометрическое модулей этих чисел " <<average_of_modules;
}
double Getarithmetic_mean_of_cubes(const double first, const double second);
{
    return (pow(first,3)+pow(second,3))/2;
}
double Getaverage_of_modules (const double x, const double z)
{
    return (z + x)/2;
}