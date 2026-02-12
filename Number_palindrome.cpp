#include<iostream>
using namespace std;
int main()
{
    int n;
    int res = 0;
    cout<<"enter the number:";
    cin>>n;
    int t = n;
    while(n != 0)
{
    int rem = n%10;
    n = n/10;
    res = res*10 + rem;
}
if(res == t)
{
    cout<<"it is palindrome:";
}
else
{
    cout<<"it is not a palindrome:";
}
    
return 0;
    
}