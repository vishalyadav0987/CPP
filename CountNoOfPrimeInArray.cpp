#include <bits/stdc++.h>
using namespace std;
int primeCount(int num)
{
    int i;
    for (int i = 2; i <= num / 2; i++)
    {
        if (i % num == 0)
        {
            return 0;
        }
        return 1;
    }
}
int main()
{
    int n, i, c = 0;
    cout<<"Enter no of Elements : "
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int prime = primeCount(arr[i]);
        if (prime == 1)
        {
            c++;
        }
    }

    cout <<"Total numbers of prime in array : "<< c;
}