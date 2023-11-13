#include <bits/stdc++.h>
using namespace std;
int fact(int a)
{
    if (a == 0)
    {
        return 1; // this stop statement is cumpulson with return statement
    }
    return a * fact(a - 1); // recursive statement
}
int main()
{
    int a;
    cout<<"Enter value: ";
    cin >> a;
    cout << "The Factorial of value " << a << ": " << fact(a);
}