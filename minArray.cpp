#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, t;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int arr1[m];
    for (j = 0; j < m; j++)
    {
        cin >> arr1[j];
    }
    int s = n+m;
    int arr2[s];
    for(i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(j=0;j<m;j++){
        arr2[n+j]=arr2[j];
    }
    
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                t = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = t;
            }
        }
    }
    int min = arr2[0];
    cout << min;
}
