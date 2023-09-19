#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;

public:
    void input()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter roll no : ";
        cin >> roll_no;
    }
    void display()
    {
        cout << "Name : " << name << endl
             << "Roll no : " << roll_no;
    }
};
int main()
{
    // static alllocation
    student s1;

    s1.input();
    s1.display();
    cout << "\n";
    // dynmamicaly memory allocation
    student *s = new student;
    (*s).input();
    (*s).display();
    cout << "\n";
    s->input();
    s->display();
    cout << "\n";
    cout<<"size : "<<sizeof(s1);
}