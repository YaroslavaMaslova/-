#include <iostream>
#include <cmath>
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
    double sum1 = 0;
    double summ2 = 0;
    while (k<=n)
        { 
            z = z*k;
            double s =pow(-1,k)*k/z;
            sum1 = sum1 +s;
            if (k>=e)
                {
                    summ2 = summ2 + s;
                }
            k=k+1;
        }
    std::cout << "сумму первых  " << n << "  членов последовательности = " << sum1 << std::endl << "сумму всех членов последовательности, не меньших " << e << " = " << summ2 << std::endl;
}