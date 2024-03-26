#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ch = 65;

    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = n-1; j >=i; j--)
        {

            cout << char(ch + j) << " ";
        }

        cout << endl;
    }
}