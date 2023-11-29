#include<iostream>

using namespace std;

int main()
{
    float a = 20.36;
    long double v = 20.36;
    cout<<"size of 20.36 is : "<<sizeof(20.36)<<endl;
    cout<<"size of 20.36f is : "<<sizeof(20.36f)<<endl;
    cout<<"size of 20.36F is : "<<sizeof(20.36F)<<endl;
    cout<<"size of 20.36l is : "<<sizeof(20.36l)<<endl;
    cout<<"size of 20.36L is : "<<sizeof(20.36L)<<endl;
    return 0;
}