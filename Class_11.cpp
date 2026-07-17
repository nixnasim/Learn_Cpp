#include<iostream>
using namespace std;
#include <iomanip> 
int main()
{
    // cout <<noshowpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float num1, num2;
    cout<<setw(50)<<"Enter your First Number:";
    cin>>num1; 
    cout<<setw(50)<<"Enter Your Second Number:";
    cin>>num2;

    float sum = num1 + num2;
    cout<<setw(50)<<"Your Sum is:"<<sum <<endl;

    float sub = num1 - num2;
    cout<<setw(50)<<"Your Subtraction is:"<<sub<<endl;

    float mul = num1 * num2;
    cout<<setw(50)<<"Your Multipiacation is:"<<mul<<endl;

    float div = num1 / num2;
    cout<<setw(50)<<"Your Division is:"<<div<<endl;

    return 0;

}