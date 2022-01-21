#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета y
 * \param x Параметр x
 * \return 
 */
double get_y(const double x);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    const double step= 0.05;
     double x = 0;
    while ( x <= 0.86)
		 {
        double y=get_y(x);;
        std::cout<<"x= " <<x<<"  y= " <<y <<std::endl;
        x=x+step;
        }
}
double get_y (const double x)
{
    return x - 1/(3+ sin (3.6* x));
} 