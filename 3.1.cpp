#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета y
 * \param x Параметр x
 * \return 
 */
double Gety(const double x);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    const double k= 0.05;
  double x = 0;
    while ( x <= 0.86)
        {
        double y=Gety(x);;
        std::cout<<"x= " <<x<<"  y= " <<y <<std::endl;
        x=x+k;
        }
}
double Gety (const double x)
{
    return x - 1/(3+ sin (3.6* x));
}