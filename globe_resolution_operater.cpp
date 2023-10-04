#include <iostream>
using namespace std;

int c = 4895; // global variable

int main()
{
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "This access global variable with help of globel resoloution operator " << ::c;
}