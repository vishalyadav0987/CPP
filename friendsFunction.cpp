#include <bits/stdc++.h>
using namespace std;
class books
{
private:
    string title;
    int noOfPages;
    void input();
    void display();
    friend void printFun();

};
void books::input()
{
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter number of pages: ";
    cin >> noOfPages;
}
void books::display()
{
    cout << "Book Name: " << title << endl;
    cout << "Number of Pages: " << noOfPages << endl;
}
void printFun()
{
    books b;
    b.input();
    b.display();
}
int main()
{
    books b;
    printFun();
}
