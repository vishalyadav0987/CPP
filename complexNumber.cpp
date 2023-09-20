#include<bits/stdc++.h>
using namespace std;
class complexNumber{
    int real,img;
    public:
    void getData()
    {
        cout<<"Enter real part : ";
        cin>>real;
        cout<<"Enter ing part : ";
        cin>>img;
    }
    void display()
    {
        
        cout<<"Real part: "<<real<<endl;
        cout<<"Img part: "<<img<<endl;
    }
    void conjugate();
    // complexNumber conjugate();
};
void complexNumber :: conjugate()
{
    cout<<"The conjugate of Number is :"<<endl;
    cout<<"Real part: "<<real<<endl;
     cout<<"Img part: "<<-img<<endl;
}
int main()
{
    complexNumber Cn;
    Cn.getData();
    Cn.display();
    Cn.conjugate();
}
