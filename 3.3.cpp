#include <iostream>
#include <cmath>
int main()
{ 
    double e=pow(30,-4);
    double n = 1;
    double z = 1;
    double S = 0;
    double x = 0.1;
    while (x <= 1)
        {
        double y = (pow(x,2)/4+x/2+1);
        z = z * n;
        double S =S+((pow(n,2)+1)/z)*pow(x/2,n);
        std::cout  << x << " " << y << " " << S << std::endl;
        n= n +1;
        x = x+e;
}
}