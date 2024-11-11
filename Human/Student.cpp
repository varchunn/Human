#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
 char* name;
 int age;
 char* university;
public:
 Student() = default;
 Student(const char* Name, int Age, const char* Uni)
 {
  cout << "Construct Student\n";
  name = new char[strlen(Name) + 1];
  strcpy_s(name, strlen(Name) + 1, Name);
  university = new char[strlen(Uni) + 1];
  strcpy_s(university, strlen(Uni) + 1, Uni);
  age = Age;
 }

 void Print() const
 {
  cout << "Output Student\n";
  cout << "Name: " << name << endl
   << "Age: " << age << endl << "University: " << university << endl;;
 }

 void Input()
 {
  char buff[20];
  cin.getline(buff, 20);
  name = new char[strlen(buff) + 1];
  strcpy_s(name, strlen(buff) + 1, buff);
        university = new char[strlen(buff) + 1];
  strcpy_s(university, strlen(buff) + 1, buff);
  cin >> age;
 }

 ~Student()
 {
  if (name != nullptr)
  {
   delete[] name;
  }
  cout << "Destruct Student\n";
  Sleep(1000);
  if (university != nullptr)
  {
   delete[] university;
  }
  cout << "Destruct Student\n";
  Sleep(1000);
 }
};



int main()
{
 Student a("Oleg", 19, "ITSTEP");
 a.Print();


 system("pause");
}
