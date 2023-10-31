#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int start,int e)
{
    for (int i = start; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
bool binarySearch(int arr[], int start, int e, int key)
{
    print(arr,start,e);
    // base case
    if (start > e)
    {
        return false;
    }
    int mid = start + (e - start) / 2;
    if (arr[mid] == key)
    {
        return true; // return mid
    }
    if (arr[mid] < key)
    {
        start = mid + 1;
        return binarySearch(arr,  start, e,  key);
    }
    else{
        e = mid - 1;
        return binarySearch(arr,  start, e,  key);

    }
}
int main()
{
    int arr[13] = {1, 2, 3, 4, 5,6,7,8,9,10,11,12,13};
    int key;
    cin >> key;
    cout << "Value Found or not: " << binarySearch(arr, 0, 12, key);
}