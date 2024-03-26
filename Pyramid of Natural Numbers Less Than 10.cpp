#include<iostream>
using namespace std;
int main(){
     int rows, i, j,a=1;
    cout << "Enter rows : ";
    cin >> rows;
    for(i=1;i<=rows;i++){
        for(j=a;j<=i+a;j++){
            cout<<j;
            
        }
        a+=1;
        
        cout<<endl;

    }
}