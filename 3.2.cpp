#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета b
 * \param k Параметр k
 * \param factorial переменная, чтобы высчитать факториал k
 * \return 
 */
double get_row(const double k, const double factorial);
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
    double  factorial = 1;
    double sum_e = 0;
    double sum_n = 0;
    while (k<=n)
        { 
            factorial = factorial*k;
            const auto row = get_row(k, factorial);
            sum_n = sum_n +row;
            if (k>=e)
                {
                    sum_e = sum_e + row;
                }
            k+=1;
        }
    std::cout << "сумму первых  " << n << "  членов последовательности = " << sum_n << std::endl << "сумму всех членов последовательности, не меньших " << e << " = " << sum_e << std::endl;
}
double get_row (const double k, const double factorial)
{
    return pow(-1,k)*k/factorial;
} 