#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int i = 1;
    for (i = 0; i < a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k < i+1; k++)
        {
            cout << "*"
                 << " ";
        }
         for (int k = i+1; k > 1; k--)
        {
            cout << "*"
                 << " ";
        }
        for (int j = a-i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}