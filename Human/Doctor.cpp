#include <iostream>
#include <windows.h>
using namespace std;

class Doctor 
{
    int experience;
    char* specialization;

public:
    Doctor() = default;
    
    Doctor(int Exp, const char* Spec) 
    {
        cout << "Construct Doctor\n";
        experience = Exp;
        specialization = new char[strlen(Spec) + 1];
        strcpy_s(specialization, strlen(Spec) + 1, Spec);
    }

    void Print() const 
    {
        cout << "Output Doctor\n";
        cout << "Experience: " << experience << " years" << endl
             << "Specialization: " << specialization << endl;
    }

    void Input() 
    {
        char buff[20];

        cout << "Enter experience (years): ";
        cin >> experience;
        cin.ignore();

        cout << "Enter specialization: ";
        cin.getline(buff, 20);
        specialization = new char[strlen(buff) + 1];
        strcpy_s(specialization, strlen(buff) + 1, buff);
    }

    ~Doctor() {
        if (specialization != nullptr) {
            delete[] specialization;
        }
        cout << "Destruct Doctor\n";
        Sleep(1000);
    }
};

int main() 
{
  
    Doctor a(10, "Cardiology");
    a.Print();

    system("pause");
    return 0;
}
