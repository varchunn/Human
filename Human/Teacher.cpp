#include <iostream>
#include <windows.h>
using namespace std;

class Teacher
{
    char* school;
    int salary;
    const char* subject;
    const char* subjects[4] = { "Math", "Physics", "Chemistry", "Biology" };

public:
    Teacher(const char* School, int Sal, int index)
    {
        cout << "Construct Teacher\n";
        school = new char[strlen(School) + 1];
        strcpy_s(school, strlen(School) + 1, School);
        salary = Sal;
        if (index >= 0 && index < 4)
        {
            subject = subjects[index];
        }
        else
        {
            subject = "Wrong!";
        }
    }

    void Print() const
    {
        cout << "Output Teacher\n";
        cout << "School: " << school << endl
            << "Salary: " << salary << endl
            << "Subject: " << subject << endl;
    }

    ~Teacher()
    {
        if (school != nullptr)
        {
            delete[] school;
        }
        cout << "Destruct Teacher\n";
        Sleep(1000);
    }
};

int main()
{
    Teacher a("ITSTEP", 19000, 0);
    a.Print();

    system("pause");
    return 0;
}
