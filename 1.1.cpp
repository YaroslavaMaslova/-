#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета a
 * \param x Параметр x
 * \param y Параметр y
 * \param z Параметр z
 * \return 
 */
double GetA(const double x, const double y, const double z);
/**
 * \brief Функция для расчета b
 * \param x Параметр x
 * \param y Параметр y
 * \param z Параметр z
 * \return 
 */
double GetB(const double x, const double y, const double z);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    const double x = -4.8;
    const double y = 17.5;
    const double z = 3.2;
    const auto a = GetA(x, y, z);
    const auto b = GetB(x, y, z);

    std::cout << "  x = " << x << ", y =  "<< y << ", z = " << z << "\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

double GetA (const double x, const double y, const double z)
{
    return y * z *pow(x,2)-z/pow(sin(x/z),2);
}

double GetB (const double x, const double y, const double z)
{
    return z * cos(y*x/z)/exp(sqrt(z));
}