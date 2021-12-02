#include <iostream>
#include <cmath>
int main()
{ 
    std::cout << "Введите первое число: ";
    double first;
    std::cin >> first ;
    std::cout << "Введите второе число: ";
    double second;
    std::cin >> second;
    double arithmetic_mean_of_cubes = (pow(first,3)+pow(second,3))/2;
    first = fabs(first);
    second = fabs(second);
    double average_of_modules =(first + second)/2;//находим среднее число модулей //
    std::cout<<"среднее арифметическое кубов этих чисел =" <<arithmetic_mean_of_cubes<< std::endl<<"среднее геометрическое модулей этих чисел " <<average_of_modules;
}