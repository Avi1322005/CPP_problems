#include<iostream>
using namespace std;
int fib(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n == 0)
    {
        return 0;
    }
    if( n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"enter number of terms in Series:";
    cin>>n;
    if(fib(n) == -1)
    {
        cout<<"number of terms cannot be negative:";
    }
    else
    {
    for(int i = 0; i < n; i++)
{
    cout<<fib(i)<<" ";
}
    }
    return 0;
    
}