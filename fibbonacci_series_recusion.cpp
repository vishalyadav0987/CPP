#include <bits/stdc++.h>
using namespace std;
int fibbo(int value)
{
    if(value == 0 || value == 1)
    return value;
  

    
    int ans = fibbo(value - 1) + fibbo(value - 2);
    return ans;
    
}
int main()
{
    int value,i=0;
    cout<<"Enet your Number: ";
    cin>>value;
    while(i<value)
    {
        cout<<fibbo(i)<<" ";
        i++;
    }
    
}