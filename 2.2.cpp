#include <iostream>
#include <cmath>
int main()
{
    const double a = 2.1; 
    std::cout<<"введите число "; 
    double number;
    std::cin >> number;
    double y;
    if (number < 4 )
       {
       y =pow(number,2)+a/number;
       }
    else
       {
       y =a*number+pow(number,3);
       }
    std::cout<<" y = " <<y;
}