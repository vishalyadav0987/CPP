#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    // cons
    student()
    {
        cout << "Constucture Call" << endl;
    }
    // dest :: used for memory delloction
    ~student()
    {
        cout << "Destructor Called" << endl;
    }
};
int main()
{
    // static
    student s1; // autometically destructure called
                // dynmaically memory
    student *b = new student();
    // mannully call karna padta hai
    delete b;
}
