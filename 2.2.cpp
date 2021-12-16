#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета a
 * \param threshold Параметр threshold
 * \param y Параметр y
 * \return 
 */
double GetA(const double threshold, const double number);
/**
 * \brief Функция для расчета b
 * \param threshold Параметр threshold
 * \param number Параметр number
 * \return 
 */
double GetB(const double threshold, const double number);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    const double threshold = 2.1; 
    std::cout<<"введите число "; 
    double number;
    std::cin >> number;
    double y;
    if (number < 4 )
       {
       y = GetA(threshold,number);
       }
    else
       {
       y = GetB(threshold,number);
       }
    std::cout<<" y = " <<y;
}
double GetA (const double threshold, const double number)
{
    return pow(number,2)+threshold/number;
}
double GetB (const double threshold, const double number)
{
    return threshold*number+pow(number,3);
}