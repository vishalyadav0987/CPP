#include <iostream>
using namespace std;
int main()
{
    int n, lastdigit, bin = 0;
    std::cout << "Enter Number : "; // using namespace std == std::
    string str ="";
    std::cin >> n;
    while (n != 0)
    {
        lastdigit = n % 2;
        str += to_string(lastdigit);
        n /= 2;                               /// this wrong programm
    }
     for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
    // std::cout << "Decimal To Bin is " << str;
}

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int w;
//           w = x;
//         int p = 0 , l;
//         if (x<0){
//             return false;
//         }
//         while(w != 0)
//         {
//              l = w % 10;
//              p = p * 10 + l;
//              w /= 10; 
//         }
//         if( p == x){
//             return true;
//         }
//         return false;
//     }
// };
// int  main()
// {
//     Solution o;
//     int n;
//     cin>>n;
//    cout<< o.isPalindrome(n);
// }
