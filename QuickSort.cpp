#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int start, int end)
{
    // starting element of array
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place to pivot  at right positon
    int rightPivotIndex = start + count;
    swap(arr[rightPivotIndex], arr[start]);

    // left and right wala case
    int i = start;
    int j = end;
    while (i < rightPivotIndex && j > rightPivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < rightPivotIndex && j > rightPivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return rightPivotIndex;
}
void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    // partion ke liye pivot;//
    int p = partition(arr, start, end);

    // left Sort
    quickSort(arr, start, p - 1);

    // right sort
    quickSort(arr, p + 1, end);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}