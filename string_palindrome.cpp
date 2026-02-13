#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"enter any string :";
    getline(cin , word);
    bool is_pal = true;
    int a = 0;
    int b = word.size()-1;
    if(word.empty())
    {
        cout<<"string is empty";
        return 0;
    }
    while(a < b)
    {
        if(word[a] == word[b])
        {
            a++;
            b--;
        }
        else
        {
            is_pal = false;
            break;
        }
    }
    if(is_pal)
    {
        cout<<"it is a palindrome:-";
    }
    else
    {
        cout<<"it is not a palindrome:";
    }
    return 0;

}
   