#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int number;
    char ch;
    char *name; // it is good practice
    student()
    {
        cout << "Constucture Call" << endl;
        name = new char[100];
    }
   

    // parameterize constructure
    student(int number)
    {
        //  this->number means object ka number;
        // number jo constructor me hai para hai;
        cout << "This -> " << this << endl;
        // this is point current object store address of object;
        this->number = number;
    }
    student(int number, char ch)
    {
        this->number = number;
        this->ch = ch;
    }
    // // copy constructor mske so default copy copy cons is finished;
    // student(student &temp)
    // {
    //     cout << "copy constructor Called" << endl;
    //     this->number = temp.number;
    //     this->ch = temp.ch;
    // }

    // deep copy constructor
    student(student &temp)
    {
        char *tempName = new char[strlen(temp.name) + 1];
        cout << "Depp copy constructor Called" << endl;
        strcpy(tempName, name);
        this->name = tempName;
        this->number = temp.number;
        this->ch = temp.ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Number : " << this->number << endl;
        cout << "ch : " << this->ch << endl;
    }
   
};
int main()
{
    // static alllocation
    // cout << "VISHAL" << endl;
    student s;
    student s1(10000);
    char name[7] = "Vishal";

    // cout << "Address of object : " << &s1 << endl; // same address === this hold the addres of object
    // cout << "Yadav" << endl;

    // dynmamicaly memory allocation
    // student *s = new student(111111);
    cout << "\n";
    student s2(10000, 'A');
    s2.print();
    // copy  cons. automatically cons made
    student s3(s2); // call by reference because if i send pass by value so if i stuck because infinte copy value in object
    s3.print();
    cout << "\n";

    student s4;

    s4.setName(name);
    s4.number = 10222;
    s4.ch = 'Z';
    cout << "\n";
    s4.print();

    s4.name[0] = 'L';
    s4.print();

    student s5(s4);
    cout << "\n";

    s5.print();
    s4 = s5;
    s4.print();
    cout << "\n";

    s5.print();

}

// agar default copy cons hoga tha apna copy hatna padega

// Shallow copy : Means if i change s2 object name so aqlso name change in s3 object

// Deep copy : Means if i change s2 object name so aqlso name not change in s3 object because in deep copy make own array of diffrent aaddress inside function so name isn't affecting after copy or changing the name