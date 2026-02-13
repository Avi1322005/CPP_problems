#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"input any string:";`  
    getline(cin , word);
0    int count = 0;
    for(auto j = 0; j < word.length() ; j++)
    {
        char i = word[j];
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        {
            count += 1;
        }
    }
    cout<<"number of vowels in "<<word<<" is:"<<count;
    return 0;
}