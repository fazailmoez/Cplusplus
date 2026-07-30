#include <iostream>
using  namespace std;
class Student 
{
    private:
    string name,grade;
    int age ,roll_number;
    
    public:
    void setname(string s)
    {
        name=s;
    }
    
    void setgrade(string g)
    {
        grade=g;
        
    }
    void setage(int a)
    {
        age =a;
    }
    void setroll_number(int r)
    {
        roll_number=r;
    }
    
    void getname()
    {
        cout<<"Name:"<<name<<endl;
        
    }
    
    void getgrade()
    {
        cout<<"Grade:"<<grade<<endl;
    }
    void getage()
    {
        cout<<"Age:"<<age<<endl;
    }
    void getroll_number()
    {
        cout<<"Roll Number:"<<roll_number<<endl;
    }
    
    
};

int main()
{
    Student S1;
    S1.setname("Rohit");
    S1.setgrade("A+");
    S1.setage(20);
    S1.setroll_number(1234);
    
    
    S1.getname();
    S1.getgrade();
    S1.getage();
    S1.getroll_number();
    
    return 0;
    
}















