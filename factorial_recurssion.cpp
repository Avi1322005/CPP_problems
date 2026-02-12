#include<iostream>
using namespace std;
int fact(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
 int x;
 cout<<"enter any number:";
 cin>>x;
 cout<<endl<<fact(x);
 if(fact(x) == -1)
{
    cout<<"factorial of negative number doesn't exist";
}
 return 0;
}