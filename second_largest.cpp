#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,6,34,23,75,34,87,65,345,543};
    int sec_max = arr[0];
    int fir_max = arr[0];
    for (int i : arr)
{
    if(i > fir_max)
    {
        sec_max = fir_max;
        fir_max = i;
    }
}
cout<<"Second largest element is: "<<sec_max;
return 0;
}