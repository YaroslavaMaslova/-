#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double x, y, z, a, b, e;
 e = 2.718281828459045;
std::cout << "Введите значение x: "; // просим ввести значения из таблицы//
std::cin >> x;
std::cout << "Введите значение y: ";
std::cin >> y;
std::cout << "Введите значение z: ";
std::cin >> z;
a =y * z *pow(x,2)-z/pow(sin(x/z),2); // находим x и y по формулам //
b = z * cos(y*x/z)/pow(e,sqrt(z));
std::cout<<"значение А= " <<a << std::endl<<"значение B= " <<b; //выводим получившиеся значения//
}