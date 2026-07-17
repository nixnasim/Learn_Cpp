#include<iostream>
using namespace std;
int main() {

int num1,num2,num3;
cout<<"Enter Your Number:";
cin>>num1>>num2>>num3;

if(num1>num2 && num1>num3){
cout<<"Bigger is Number One:"<<num1;
}

else if(num2>num3 && num2>num1){
cout<<"Bigger is Number two:"<<num2;
}

else if(num3>num2 && num3>num1){
cout<<"Bigger is Number:"<<num3;
}

return 0;
}