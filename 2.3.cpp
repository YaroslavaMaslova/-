#include <iostream>
#include <cmath>
/**
 * \brief Функция для расчета a
 * \param a Параметр a
 * \return 
 */
double GetA(const double a);
/**
 * \brief Функция для расчета b
 * \param b Параметр b
 * \return 
 */
double GetB(const double b);
/**
 * \brief Функция для расчета c
 * \param c Параметр c
 * \return 
 */
double GetC(const double c);
/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    std::cout << "Введите сторону а: "; 
    double a;
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    double b;
    std::cin >> b;
    std::cout << "Введите сторону c: ";
    double c;
    std::cin >> c;
    const auto a_a = GetA(a);
    const auto b_b = GetB(b);
    const auto c_c = GetC(c); 
    if (a > b)
        {
        if (a>c)
            {
                if (a_a -(b_b + c_c)==0)
                {
                std::cout<<"треугольник является прямоугольным"<< std::endl<<" гипотинузой будет сторона a ";
                }
                else
                {
                std::cout<<"треугольник не является прямоугольным ";
                }
            }
        else
            {
                if (c_c- (a_a + b_b)==0)
                {
                std::cout<<"треугольник является прямоугольным"<< std::endl<<" гипотинузой будет сторона c ";
                } 
                else
                {
                std::cout<<"треугольник не является прямоугольным ";
                }
            }
        } 
    else
        {
            if (b>c)
            {
                if (b_b -(a_a + c_c)==0)
                    {
                    std::cout<<"треугольник является прямоугольным"<< std::endl<<" гипотинузой будет сторона b ";
                    }
				else
                    {
                    std::cout<<"треугольник не является прямоугольным ";
                    }
			}
            else
            {
                if (c_c -(a_a + b_b)==0)
                    {
                    std::cout<<"треугольник является прямоугольным"<< std::endl<<" гипотинузой будет сторона c ";
                    }
				else
                    {
                    std::cout<<"треугольник не является прямоугольным ";
                    }
				}
	    }
	}
double GetA (const double a)
{
    return pow(a,2);
}
double GetB (const double b)
{
    return pow(b,2);
}
double GetC (const double c)
{
    return pow(c,2);
}