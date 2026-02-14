//to check whether the given strings are anagrams or not
#include<iostream>
using namespace std;
int main()
{
    int arr[26]={0};
    cout<<"enter first string:";
    string a;
    getline(cin , a);
    cout<<"enter second string:";
    string b;
    getline(cin , b);
    if(a.size() != b.size())
    {
        cout<<"not an angram:";
        return 0;
    }
    for(int i = 0 ; i < a.size(); i++ )
    {
        arr[a[i]-'a']++;
        arr[b[i]-'a']--;
    }
    for(auto i:arr)
    {
        if(i != 0)
        {
            cout<<"not an anagram";
            return 0;
        }
    }
    cout<<"strings are anagram:";
    return 0;
}