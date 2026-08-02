#include <iostream>
using namespace std;

class Student
{
private:
    string name, grade;
    int age, roll_number;

public:

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setGrade(string g)
    {
        grade = g;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setRollNumber(int r)
    {
        roll_number = r;
    }

    // Getters
    string getName()
    {
        return name;
    }

    string getGrade()
    {
        return grade;
    }

    int getAge()
    {
        return age;
    }

    int getRollNumber()
    {
        return roll_number;
    }
};

int main()
{
    Student S1;

    S1.setName("Rohit");
    S1.setGrade("A+");
    S1.setAge(20);
    S1.setRollNumber(1234);

    cout << S1.getName() << endl;
    cout << S1.getGrade() << endl;
    cout << S1.getAge() << endl;
    cout << S1.getRollNumber() << endl;

    return 0;
}