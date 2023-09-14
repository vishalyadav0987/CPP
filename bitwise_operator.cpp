#include <iostream>
using namespace std;
int main()
{
    int num1 = 4;
    int num2 = 3;
    cout << (num1 >> num2)<<endl;
    cout << (num1 << num2)<<endl;
    cout << (num1 | num2)<<endl;
    cout << (num1 & num2)<<endl;
    cout << (num1 ^ num2)<<endl;
    cout << (~num2)<<endl;
}