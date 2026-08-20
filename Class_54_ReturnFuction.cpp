#include <iostream>
using namespace std;

double addition (double, double);

int main()

{

    // double result = addition (10.49, 64.95);
    // cout<< result;
    cout<< addition (10.49, 64.95);


    
return 0;
}

double addition(double a, double b)
{
    double sum = a + b;
    return sum;

}