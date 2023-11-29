/*function overloading*/

#include <iostream>

using namespace std;

class test 
{
    public:
    int a,b;
    test(int x,int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    test obj(10,20);
    cout<<obj.a<<"\n"<<obj.b<<"\n";
    
    return 0;
}
