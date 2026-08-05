#include <iostream>
using namespace std;

class Student
{
    private:
    string name,grade;
    int age,roll_number;
    public:
    Student()
    {
        name="Rohit";
        grade="A+";
        age=12;
        roll_number=1234;
        
    }
    
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    
    
};

int main()
{
    Student S1;
    S1.display();
    
    return 0;
    
}
























