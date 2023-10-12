#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you are eligible for driving license" << endl;
    }
    else
    {
        cout << "you ayr not elgible" << endl;
    }
}