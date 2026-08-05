#include <iostream>
using namespace std;

class Student
{
    string name;
    int age ;
    
    public:
    Student()
    {
        name="unknown";
        age=0;
    }
    
    Student(int a)
    {   name="unknown";
        age=a;
    }
    Student(string n,int a)
    {
        name=n;
        age=a;
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
  Student S2(12);
  Student S3("Rohit",23);
  
   S1.display();
   S2.display();
   S3.display();
   
   
   return 0;
    
    
    
    
    
    
    
    
    
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    