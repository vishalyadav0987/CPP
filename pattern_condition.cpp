#include<iostream>
using namespace std;
int main()
{
    int rows,cols, i, j;
    cout << "Enter rows : ";
    cin >> rows;
    cout <<"Enter cols : ";
    cin>> cols;
    for (i=1;i<=rows;i++){
        for (j=1;j<=cols;j++){
            if(i==1 || j==1|| i==rows||j==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
