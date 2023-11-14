#include <bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    return  arr[0]  + sumOfArray(arr + 1, n - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
   cout<< sumOfArray(arr, size);
}