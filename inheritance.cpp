#include <bits/stdc++.h>
using namespace std;
class Person
{
    // 4th way
protected:
    string game;

public:
    int phone_number;
    int id;
    long int salary;

public:
    int getdata()
    {
        return this->id;
    }
    void display()
    {
        cout << "Salary : " << salary << endl;
    }
};
// 1. way public:public:public
/*
class Student : public Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
};
*/

// 2. way public:protected:protcted used inside both class
/*
class Student : protected Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
    int getId()
    {
        return this->id;
    }
};
*/

// 3. way public:private:private used inside both class
/*
class Student : private Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
    int getId()
    {
        return this->id;
    }
};
*/

// 4. way protected:public:protected used inside both class
/*
class Student : public Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
    void getGame()
    {
        game = "cricket";
        cout << "Game : " << game;
    }
};
*/

// 5. way protected:protected:protected used inside both class
/*
class Student : protected Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
    void getGame()
    {
        game = "cricket";
        cout << "Game : " << game;
    }
};
*/

// 6. way protected:private:private used inside both class

class Student : private Person
{
public:
    string color;
    void fun()
    {
        cout << "Sab theek hai" << endl;
    }
    void getGame()
    {
        game = "cricket";
        cout << "Game : " << game;
    }
};

// 7 8 9 private 0f Person class  is not accesible anyware or anymode inherite
int main()
{
    /*
    cout << "Inheritance public:public:public" << endl;
    Student s;
    cout << s.getdata() << endl;
    s.display();
    s.fun();
    */

    /*
    cout << "Inheritance public:protected:protcted" << endl;
    Student s;
    //    cout<<s.id;  // protectednot access
    cout <<"Id : "<< s.getId();
    */

    /*
    cout << "Inheritance public:private:private" << endl;
    Student s;
    // cout<<s.id;  // protectednot access
    cout << "Id : " << s.getId();
    */

    /*
    cout << "Inheritance protected:public:protected" << endl;
    Student s;
    // cout<<s.game;  // protectednot access
    s.getGame();
    */

    /*
    cout << "Inheritance protected:protected:protected" << endl;
    Student s;
    // cout<<s.game;  // protected not access
    s.getGame();
    */

   cout << "Inheritance protected:private:private" << endl;
    Student s;
    // cout<<s.game;  // protected not access
    s.getGame();
}

// types of inheritance;
// 1. single level (A-->B)
// 2. multi level (A-->B-->C)
// 3. multiple inheritance (A-->B , B-->C)
// 4. hirarcallly ((A-->B , A-->C))