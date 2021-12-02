#include <iostream>
#include <cmath>
int main()
{
    std::cout<< "Введите сколько выделилось теплоты: "; 
    double Q;
    std::cin>> Q;
    std::cout << "Введите значение сопротивления: "; 
    double R;
    std::cin >> R;
    std::cout << "Введите значение силы тока: ";
    double I;
    std::cin >> I;
    double t= Q/(R*pow(I,2));
    std::cout << "Проволка нагревалась " <<t; 
}