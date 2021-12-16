#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета b
 * \param k Параметр k
 * \param z Параметр z
 * \return 
 */
double Gets(const double k, const double z);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{ 
    std::cout << "Введите число n: ";
    double n;
    std::cin >> n ;
    std::cout << "Введите число e: ";
    double e;
    std::cin >> e;
    double k = 1;
    double  z = 1;
    double sum = 0;
    double summ = 0;
    while (k<=n)
        { 
            z = z*k;
            const auto s = Gets(k, z);
            sum = sum +s;
            if (k>=e)
                {
                    summ = summ + s;
                }
            k=k+1;
        }
    std::cout << "сумму первых  " << n << "  членов последовательности = " << sum << std::endl << "сумму всех членов последовательности, не меньших " << e << " = " << summ << std::endl;
}
double Gets (const double k, const double z)
{
    return pow(-1,k)*k/z;
}