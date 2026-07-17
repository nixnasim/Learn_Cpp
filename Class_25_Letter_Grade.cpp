#include <iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter Your Marks: ";
    cin >>marks;

    if (marks>100){
        cout<<"Invalid Marks";}

        else if(marks<0){
        cout<<"Invalid Marks";}

                else if(marks>=80){
        cout<<"Your Grade Is :A+";}

        
                else if(marks>=70){
        cout<<"Your Grade Is :A";}
        
        
                else if(marks>=60){
        cout<<"Your Grade Is :A-";}
        
        
                else if(marks>=50){
        cout<<"Your Grade Is :B";}
        
        
                else if(marks>=40){
        cout<<"Your Grade Is :C";}

        
                else if(marks>=33){
        cout<<"Your Grade Is :D";}

               else {
        cout<<"Your Are Fail"<<endl;
        cout<<"Best of Luck Next Time";}



        

    return 0;
}