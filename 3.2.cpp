#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета ряда
 * \param k Параметр k
 * \return
 */
double get_row(const double k);
/**
 * \brief Функция для расчета суммы до n
 * \param sum_n
 * \param row
 * \return
 */
double get_sum_n(double sum_n, const double row);
/**
 * \brief Функция для расчета суммы чисел не меньших e
 * \param sum_e
 * \param row
 * \return
 */
double get_sum_e(double sum_e, const double row);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    std::cout << "Введите число n: ";
    int n;
    std::cin >> n;
    std::cout << "Введите число e: ";
    double e;
    std::cin >> e;
    int k = 1;
    double sum_e = 0;
    double sum_n = 0;
    while (k <= n)
    {
        const auto row = get_row(k);
        sum_n = get_sum_n(sum_n, k);
         k += 1;
    }
    k = 1;
    const auto row = get_row(k);
    while (row >= e)
    {
        sum_e = get_sum_e(sum_e, row);
        k += 1;
        const auto row = get_row(k);
    }
std::cout << "сумму первых  " << n << "  членов последовательности = " << sum_n << std::endl << "сумму всех членов последовательности, не меньших " << e << " = " << sum_e << std::endl;
}
double get_row(const double k)
{
    return 1 / (pow(k, 2)) + k;
}
double get_sum_e(double sum_e, const double row)
{
    return sum_e + row;
}
double get_sum_n(double sum_n, const double row)
{
    return sum_n + row;
}