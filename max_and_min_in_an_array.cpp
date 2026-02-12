//to find maximum and mininmum value in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[20] = {5,3,2,7,54,3,5,33,53,86,-1,-54,-34,56,334,432,-342,435,-43,45};
    int maximum = arr[0];
    int minimum = arr[0];
    for(int i : arr)
    {
        if(maximum <= i)
        {
            maximum = i;
        }
        if(minimum >= i)
        {
            minimum = i;
        }
    }
      cout<<"maximum value in an array is :"<<maximum<<endl;
      cout<<"minimum value in an array is:"<<minimum<<endl;
    return 0;
}