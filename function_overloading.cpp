/*function overloading*/

#include <iostream>

using namespace std;

void sum(int a,int b)
{
    cout<<"Sum = "<<a+b<<"\n";
}

void sum(int a,int b,int c)
{
    cout<<"Sum = "<<a+b+c<<"\n";
}

int main()
{
    int a=5,b=6,c=8;
    sum(a,b);
    sum(a,b,c);
    
    return 0;
}
