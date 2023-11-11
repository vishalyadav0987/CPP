// #include <bits/stdc++.h>
// using namespace std;
// void nNumbers(int nth, int start = 1)
// {

//     if (start == nth + 1)
//     {

//         return; // basecase
//     }
//     cout << start << " ";
//     return nNumbers(nth, start + 1);
// }
// int main()
// {
//     int a;
//     cout << "Enter nth Term: ";
//     cin >> a;
//     nNumbers(a);
// }


#include <bits/stdc++.h>
using namespace std;
void nNumbers(int src, int dest)
{
    cout<<"Source to "<<src<<" destionation "<<dest<<endl;
    if (src == dest)
    {

        return; // basecase
    }

    //src++; // processing 
    
    return nNumbers(src+1,dest);
}
int main()
{
    int src,dest;
    cout << "Enter source Term: ";
    cin >> src;
     cout << "Enter destination Term: ";
    cin >> dest;
    nNumbers(src,dest);
}
