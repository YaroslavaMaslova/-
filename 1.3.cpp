#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета t
 * \param q Параметр q
 * \param r Параметр r
 * \param i Параметр i
 * \return 
 */
double Gett(const double q, const double r, const double i);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    std::cout<< "Введите сколько выделилось теплоты: "; 
    double q;
    std::cin>> q;
    std::cout << "Введите значение сопротивления: "; 
    double r;
    std::cin >> r;
    std::cout << "Введите значение силы тока: ";
    double i;
    std::cin >> i;
    const double t = Gett(q, r, i);
    std::cout << "Проволка нагревалась " << t << " секунд"<< std::endl;
    return 0;
}
double Gett(const double q, const double r, const double i)
{
    return q/(r*pow(i,2));
}