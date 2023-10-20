#include<bits/stdc++.h>
using namespace std;
// void insertionSort(int arr[], int n)
// {

// }
int main()
{
    int i, n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // insertionSort(arr,n)
        int j, temp;
    for (j = 2; j <= n; j++)
    {
        temp = arr[j];
        i = j - 1;
        while (i > 0 && arr[i] > temp)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=temp;
    }
     cout<<"After sorting :"<<endl;
    for(i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}