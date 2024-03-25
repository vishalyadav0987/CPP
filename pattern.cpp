#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cin >> n;

    for (k = n; k > 0; k--)
    {
        for (i = n; i >= 1; i--)
        {
            for (j = 1; j <= k; j++)
            {
                cout << i<<" ";
            }
        }
        cout << ("$\n");
    }
}