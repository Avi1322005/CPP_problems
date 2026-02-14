#include<iostream>
using namespace std;
int main()
{
    int arr[26]={0};
    string st;
    cout<<"enter any string:";
    cin>>st;
    for( int i = 0 ; i < st.size(); i++)
    {
        arr[st[i] - 'a']++;
    }
    for( auto i : st)
    {
        if(arr[i-'a'] == 1)
        {
            cout<<char(i)<<" is the first no repeating character in string";
            return 0;
            
        }
    }
    cout<<"no non repeating characters";
    
    return 0;
}