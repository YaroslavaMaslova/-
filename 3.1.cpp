#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double y, x, k;
k= 0.05;//вводим константу из условия//
for (x = 0; x <= 0.86;)//запускаем цикл,  устанавливая с чего его начинаем и на чём заканчиваем//
{
y=x - 1/(3+ sin (3.6* x));//находим значение функции//
std::cout<<"x= " <<x;
std::cout<<"  y= " <<y <<std::endl;//выводим переменную и получившуюся функцию//
x=x+k;//увеличиваем переменную на указанный шаг//
}
}