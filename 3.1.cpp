#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
int main()
{
double y, x, k;
x = 0;
k= 0.05;
for (x = 0; x <= 0.85; k)
{
y=x - 1/(3+ sin (3.6* x));
std::cout<<" x= " <<x;
std::cout<<" y= " <<y <<std::endl;
x=x+k;
}
}