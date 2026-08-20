#include<iostream>
using namespace std;

void addition (int, int);
void multiplication (int, int);
void subtraction (int, int);
void division (double, int);

int main()

{
    addition (10,20);
    subtraction (30,40);
    multiplication(50,60);
    division(70,80);

return 0;
}

void addition (int a, int b)
{
    int sum = a + b;
    cout<< "Addition =" <<sum <<endl;
}
void subtraction (int a, int b)
{   int sub = a - b;
    cout<< "Subtraction =" << sub <<endl;
}
void multiplication (int a, int b)
{    int mul = a * b;
    cout<< "Multiplication =" << mul <<endl;
}
void division (double a, int b)
{    double div = (double) a / b;
    cout<< "Division =" << div;
}