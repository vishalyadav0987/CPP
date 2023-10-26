#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // making two arrays
    int *first = new int[len1];
    int *second = new int[len2];
    int MainArrayIndexk = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[MainArrayIndexk++];
    }
    MainArrayIndexk = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[MainArrayIndexk++];
    }
    // merging programe
    int k = 0;
    int j = 0;
    MainArrayIndexk = start;
    while (k < len1 && j < len2)
    {
        if (first[k] <= second[j])
        {
            arr[MainArrayIndexk++] = first[k++];
        }
        else
        {
            arr[MainArrayIndexk++] = second[j++];
        }
    }
    // copy arr1 ke elements arr3 me joo baki hia
    while (k < len1)
    {
        arr[MainArrayIndexk++] = first[k++];
    }
    // copy arr2 ke elements arr3 me joo baki hia
    while (j < len2)
    {
        arr[MainArrayIndexk++] = second[j++];
    }
    delete []first;
    delete []second;
}
void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
   
    int mid = start + (end - start) / 2;
    // int mid = start + (e - start) / 2;

    // left sort
    mergeSort(arr, start, mid);

    // right sort
    mergeSort(arr, mid + 1, end);

    // merging
    merge(arr, start, end);
}

int main()
{
    int arr[5] = {5, 4, 1, 8, 3};
    int n = 5;

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}