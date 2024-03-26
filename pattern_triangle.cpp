#include<iostream>
using namespace std;
int main()
{
    int rows,cols, i, j;
    cout << "Enter rows : ";
    cin >> rows;
    cout <<"Enter cols : ";
    cin>> cols;
    for (i=1;i<=rows;i++){                           /////  * * * 1 * * *
        for (j=1;j<=cols;j++){                         //       2   2
            if((i+j)%2!=0){                     //            3       3
                cout<<"1";                       //         4 4 4 4 4 4 4
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}