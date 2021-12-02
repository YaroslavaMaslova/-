#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
double GetA(const double x, const double y, const double z);
double GetB(const double x, const double y, const double z);
int main()
{
    const double x = -4.8;
    const double y = 17.5;
    const double z = 3.2;
    const auto a = GetA(x, y, z);
    const auto b = GetB(x, y, z);

    std::cout << " x = " << x << ", y =  "<< y << ", z = " << z << "\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

double GetA (const double x, const double y, const double z)
{
    return y * z *pow(x,2)-z/pow(sin(x/z),2);
}

double GetB (const double x, const double y, const double z)
{
    return z * cos(y*x/z)/pow(M_E,sqrt(z));
}