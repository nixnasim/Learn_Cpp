#include<iostream>
using namespace std;

void square (int n)
{
    cout<< n*n;

}

int main ()
{
    int num;

    cout<<"Enter a integer Number that you want Square :";
    cin >> num;
    square(num);


return 0;
}