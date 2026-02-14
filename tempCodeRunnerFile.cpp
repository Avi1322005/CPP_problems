// to check whether the given strings are anagrams
#include<iostream>
using namespace std;
int main()
{
int res = 0;
    string w1;
    string w2;
    cout<<"enter first string:";
    getline(cin , w1);
    cout<<"enter second string:";
    getline(cin , w2);
    int n = w1.size()  ;
    if(w1.size() != w2.size())
    {
        cout<<"not an anagram:";
        return 0;
    }
    else;
    for(int i = 0 ; i < n ; i ++)
    {
        res = res^w1[i];
    }
    for(int i = 0 ; i < n; i ++)
    {
        res = res^w2[i];
    }
    if(res == 0)
    {
        cout<<"strings are anagrams";
    }
    else
    {
        cout<<"strings are not an anagrams";
    }
    return 0;


}