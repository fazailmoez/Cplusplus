#include <iostream>
using namespace std;
class Student
{
    string name;
    int age;
    
    public:
    Student(string s,int a)
    {
        name=s;
        age=a;
    }
    
    
    Student(const Student &obj)
    {
        name=obj.name;
        age=obj.age;
    }
    
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
};
int main()
{
    Student S1("Rohit",12);
    
    Student S2=S1;
    
    S1.display();
    S2.display();
    
    return 0;
    
    
}

























