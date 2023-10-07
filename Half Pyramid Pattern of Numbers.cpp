#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"Enter rows : ";
    cin>>rows;
    for(i=1;i<rows+1;i++){
        for(j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}