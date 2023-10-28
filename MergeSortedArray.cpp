#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int s1, int arr2[], int s2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    // agar s1 > s2 se toh loop break ho jayege baki element bache rehenge s1 me
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy arr1 ke elements arr3 me joo baki hia
    while (i < s1)
    {
        arr3[k++] = arr1[i++];
    }
    // copy arr2 ke elements arr3 me joo baki hia 
    while (j < s2)
    {
        arr3[k++] = arr2[j++];
    }
}
void print(int arr3[], int s3)
{
    for(int i = 0;i<s3;i++)
    {
        cout<<arr3[i] <<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {3, 4, 5};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
}