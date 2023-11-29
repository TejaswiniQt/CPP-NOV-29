/*Program to find sum of elements in a given array*/

#include <iostream>

using namespace std;
int find_sum(int *arr,int size);

int main()
{
    int arr[] = {8,5,2,6,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = find_sum(arr,size);
    cout<<sum;
    return 0;
}

int find_sum(int *arr,int size)
{
    if(size == 0)
    return 0;
    else
    return arr[0] + find_sum(arr+1, size-1);
}