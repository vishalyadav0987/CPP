#include <iostream>
using namespace std;
int modifyVar(int &a)
{
    cout << "Value of a in function :" << a<<endl;
    a *= 2;
    return  a;
}

int main()
{
    int x;
    int &y = x;
 cout << "Enter x: ";
    cin >> x;
    cout << "After modify value is not change in main fun :"<<modifyVar(x)<<endl;
 cout<< "Value of x in main after modify it same (CallbyReference): " << x <<endl;
}