#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double number, y, a;
a = 2.1; //вводим константу, указанную в задаче//
std::cout<<"введите число "; //просим ввести переменную//
std::cin >> number;
if (number < 4 ) //выясняем, что число больше 4//
{
y =pow(number,2)+a/number;//да, используем одну формулу//
}
else
{
y =a*number+pow(number,3);//нет, другую//
}
std::cout<<" y = " <<y;//выводим чему равна функция//
}