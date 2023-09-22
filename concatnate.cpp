// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int lines,i;
//     string s,s1,s3,big;
//     for(i=0;i<2;i++){
//     cin>>lines; 
//     for(i=0;i<lines;i++){
//         getline(cin,s);
//         // big +=s+"\n";
//     }
//     }
//     // s3 = s + s1;
//     // cout<<"Catalog: "<<s3;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j,t;
    cin>>n;
    cin>>m;
    int s = n+m;
    int arr[n],arr1[m],arr2[s];
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    for(j=0;j<m;j++){
        cin>>arr1[j];
        arr2[n+j]=arr1[j];
    }
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(arr2[j]>arr2[j+1]){
                t = arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=t;
                
            }
        }
    }
    int min = arr2[0];
    cout<<min;
}