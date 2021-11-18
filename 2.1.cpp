#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double x, y, a, b, z;
std::cout << "Введите первое число: ";
std::cin >> x;
std::cout << "Введите второе число: ";
std::cin >> y;
a = x * x * x;
z =y * y * y;
a = (a+z)/2;
if (x < 0)
{
x = x * (-1);
}
if (y < 0)
{
y = y * (-1);
}
b =(x + y)/2;
std::cout<<"среднее арифметическое кубов этих чисел =" <<a;
std::cout<<" среднее геометрическое модулей этих чисел " <<b;
}