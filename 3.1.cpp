#include <iostream>
#include <cmath>
int main()
{
    double k= 0.05;
    for (double x = 0; x <= 0.86;)
        {
        double y=x - 1/(3+ sin (3.6* x));
        std::cout<<"x= " <<x;
        std::cout<<"  y= " <<y <<std::endl;
        x=x+k;
        }
}