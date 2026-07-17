#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter Your Letter:";
cin>>ch;
ch = tolower (ch);
if(ch=='a' || ch=='u' || ch=='i' || ch=='o' || ch=='e'){
    cout<<"Vowel";
}

else{
    cout<<"Consonant";
}




return 0;
}