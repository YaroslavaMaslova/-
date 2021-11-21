#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double x, y, a, b, s;
std::cout<<"Какую площадь нужно вычислить? " << std::endl<<"1 прямоугольник"<< std::endl<<"2 треугольник"<< std::endl;
std::cin >> x;
if (x == 1)
{
std::cout << "Введите сторону а: ";
std::cin >> a;
std::cout << "Введите сторону b: ";
std::cin >> b;
s = a * b;
std::cout<<"площадь квадрата = " <<s;
} else
{
std::cout << "Какой треугольник? "<< std::endl<< "1 прямоугольный"<< std::endl<<" 2 правильный "<< std::endl;
std::cin >> y;
if (y == 1)
{
std::cout << "Введите первый катет ";
std::cin >> a;
std::cout << "Введите второй катет ";
std::cin >> b;
s = a * b / 2;
std::cout<<"площадь прямоугольного тряугольника = " <<s;
} else
{
std::cout << "Введите основание треугольника ";
std::cin >> a;
s = pow(a,2) * sqrt(3)/4;
std::cout<<"площадь правильного тряугольника = " <<s;
}
}
}