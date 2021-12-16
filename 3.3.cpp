#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета y
 * \param x Параметр x
 * \return 
 */
double Gety(const double x);
/**
 * \brief Функция для расчета S
 * \param S Параметр S
 * \param n Параметр n
 * \param z Параметр z
 * \param x Параметр x
 * \return 
 */
double GetS(const double S, const double n, const double z,const double x);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{ 
    double e=pow(30,-4);
    double n = 1;
    double z = 1;
    double S = 0;
    double x = 0.1;
    while (x <= 1)
        {
        double y = Gety(x);
        z = z * n;
        double S =GetS(S, n, z, x);
        std::cout  << x << " " << y << " " << S << std::endl;
        n= n +1;
        x = x+e;
}
}
double Gety(const double x)
{ 
    return (pow(x,2)/4+x/2+1);
}
double GetS(const double S, const double n, const double z,const double x)
{
    return S+((pow(n,2)+1)/z)*pow(x/2,n);
}