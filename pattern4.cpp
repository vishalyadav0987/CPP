#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ch = 65, a = 0,b=3;
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            cout << " "
                 << " ";
        }
        for (k = 0; k <= i+a; k++)
        {
            cout << char(ch + k) << " ";
        }
    
        a += 1;
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j =0; j < i; j++)
        {
            cout << " "
                 << " ";
        }
        for (k =n+b; k>=0 ; k--)
        {
            cout << char(ch + k) << " ";
        }
    
        b -=2;
        cout << endl;
    }

}