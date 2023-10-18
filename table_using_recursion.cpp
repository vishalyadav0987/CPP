#include <bits/stdc++.h>
using namespace std;
void tablePrint(int a,int end)
{

    
    if (end == 10)
    {

        return; // basecase
    } 
    int smallProblem = ++end;
    int biggerProblem = a * smallProblem;
    cout << a << " x " <<end  << " = " << biggerProblem<<endl;

    return tablePrint(a,end);
}
int main()
{
    int a;
    cout << "Enter value: ";
    cin >> a;
    int val = 0;
    tablePrint(a,val);
}