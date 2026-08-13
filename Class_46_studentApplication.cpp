#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n, sum=0;
cout<<"Enter Number Of Students :" ;
cin>>n;

int students [n];

// input

for (int i = 0; i<n; i++)
{   
    cout<<"Marks for Student" <<"   " <<i+1 <<" "<< "=";
    cin>> students[i];
    sum = sum +students[i];
}

// output

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

float avg = (float) sum / n;
    cout <<"Total marks :" <<sum <<endl;
    cout << "Average :" <<avg <<endl;

// Maximum and minimum

int max = students [0];
int min = students [0];

for (int i=1; i<n; i++)
{   
    if (max < students [i]);
    {
        max = students [i];
    }
    if (min > students [i]);
    {
        min = students [i];
    }
}

cout <<"Maximum marks :"<< max <<endl;
cout <<"Minimum marks :"<< min;

return 0;
}