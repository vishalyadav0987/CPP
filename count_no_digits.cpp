#include <iostream>
using namespace std;
int main()
{
    int n, digits = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n > 0)
    {

        n = n / 10;
        ++digits;
    }
    cout << "The number of digits is : " << digits;
}