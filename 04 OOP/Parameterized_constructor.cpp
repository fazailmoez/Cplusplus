#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age ;
    public:
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
    
   Student S1("Rohit",12);
   Student S2("Ahmad",23);
   Student S3("Ali",34);
    S1.display();
    S2.display();
    S3.display();
    
    
    return 0;
    
    
    
    
    
    
    
    
}





















