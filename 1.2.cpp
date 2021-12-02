#include <iostream>
#include <cmath>
int main()
{
    double first_side;
    std::cout << "Введите первую сторону: "; 
    std::cin >> first_side;
    double second_side;
    std::cout << "Введите вторую сторону: ";
    std::cin >> second_side;
    double rectangular_square = second_side*first_side;
    double area_triangle =second_side*first_side/2;
    std::cout <<  "площадь прямоугольника= " << rectangular_square << ", площадь треугольника = " << area_triangle << std::endl;
}