#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter Your Letter:";
cin>>ch;
if(ch=='a' || ch=='u' || ch=='i' || ch=='o' || ch=='e' || ch=='A' || ch=='U' || ch=='I' || ch=='O' || ch=='E' ){
    cout<<"Vowel";
}

else{
    cout<<"Consonant";
}




return 0;
}