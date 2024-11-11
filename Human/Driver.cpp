#include<iostream>
#include<Windows.h>
using namespace std;

class Driver
{
    char* autonum;
    int ser;
    int licnum;
public:
    Driver() = default;
    Driver(const char* Auto, int Ser, int Lic)
    {
        autonum = new char[strlen(Auto) + 1];
        strcpy_s(autonum, strlen(Auto) + 1, Auto);
        ser = Ser;
        licnum = Lic;
    }

    void Print() const
    {
        cout << "Output Driver\n";
        cout << "Number of auto - " << autonum << endl << "Seria -" << ser << endl << "License number - " << licnum << endl;
    }

    void Input()
    {
        char buff[20];
        cin.getline(buff, 20);
        autonum = new char[strlen(buff) + 1];
        strcpy_s(autonum, strlen(buff) + 1, buff);
        cin >> licnum;
        cin >> ser;
    }

    ~Driver()
    {
        if (autonum != nullptr)
        {
            delete[] autonum;
        }
        cout << "Destruct Driver\n";
        Sleep(1000);
    }
};



int main()
{
    Driver a("BH 6789 AA", 15, 7);
    a.Print();


    system("pause");
}

