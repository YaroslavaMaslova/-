#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета rectangular_square
 * \param first_side Параметр first_side 
 * \param second_side Параметр second_side
 * \return 
 */
double Getrectangular_square(const double first_side, const double second_side);
/**
 * \brief Функция для расчета area_triangle
 * \param first_side Параметр first_side
 * \param second_side Параметр second_side
 * \return 
 */
double Getarea_triangle(const double first_side, const double second_side);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    double first_side;
    std::cout << "Введите первую сторону:  "; 
    std::cin >> first_side;
    double second_side;
    std::cout << "Введите вторую сторону: ";
    std::cin >> second_side;
    const auto rectangular_square = Getrectangular_square(first_side, second_side);
    const auto area_triangle = Getarea_triangle(first_side, second_side);
    std::cout <<  "площадь прямоугольника= " << rectangular_square << ", площадь треугольника = " << area_triangle << std::endl;
    return 0;
}
double Getrectangular_square (const double first_side, const double second_side)
{
    return second_side*first_side;
}
double Getarea_triangle (const double first_side, const double second_side)
{
    return second_side*first_side/2;
}