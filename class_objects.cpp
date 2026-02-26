#include<iostream>
using namespace std;
class example{
    private:
    int a = 10;
    public:
    void accessing()
    {
        cout<<"acessed value is :"<< a << endl;
    }
};
class student{
        public:
        string name;
        int age;
    };
int main()
{
    example E1;
    E1.accessing();
    student s1;
    s1.name = "Gaurav";
    s1.age = 21;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    return 0;
}
