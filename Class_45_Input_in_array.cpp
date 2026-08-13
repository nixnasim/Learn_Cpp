#include<iostream>
using namespace std;
int main()
{
int num [5];

for (int i = 0; i<=4; i++)
{
    cout<<"Enter your number" <<"   " <<i+1  <<"   "<<"="; 
    cin>> num[i];
}
// cout<<"Enter your number 1 :";
// cin>>num[0];
// cout<<"Enter your number 2 :";
// cin>>num[1];
// cout<<"Enter your number 3 :";
// cin>>num[2];
// cout<<"Enter your number 4 :";
// cin>>num[3];
// cout<<"Enter your number 5 :";
// cin>>num[4];

for (int i = 0; i<=4; i++)
{
    cout<<num[i]<<" ";
}

return 0;
}