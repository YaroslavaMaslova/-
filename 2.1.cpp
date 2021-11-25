#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double first, second, a, b;
std::cout << "Введите первое число: "; //просим ввести оба числа//
std::cin >> first ;
std::cout << "Введите второе число: ";
std::cin >> second;
a = (pow(first,3)+pow(second,3))/2;//находим среднее арифметическое кубов//
first = fabs(first);//находим модули чисел//
second = fabs(second);
b =(first + second)/2;//находим среднее число модулей //
std::cout<<"среднее арифметическое кубов этих чисел =" <<a<< std::endl<<"среднее геометрическое модулей этих чисел " <<b; //выводим получившиеся значения//
}