#include<iostream>

using namespace std;

//Global variable
int sum = 10;

int main()
{
    int a,b,sum;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    sum = a + b;
    cout<<"sum = "<<sum<<endl;
    cout<<"Global sum = "<<::sum<<endl; //:: scope resolution operator for global variable
    return 0;   
}