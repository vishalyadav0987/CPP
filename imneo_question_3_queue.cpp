#include <bits/stdc++.h>
#include <queue>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    int temp;
    Queue()
    {
        this->size = 50;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int element)
    {
        if (rear == size)
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            arr[rear] = element;
            cout << "Print job with " << element << " pages is enqueued."<<endl;
            rear++;
        }
            temp = rear;
            // cout<<temp<<endl;
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            int a = arr[front];
            cout << a << " ";
            arr[front] = -1;
            front++;
            if (rear == front)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    void display()
    {
        
        cout<<"Print jobs in the queue: ";
        for (int i = 0; i < ((rear==front)?size:rear); i++)
        {
             cout<< arr[i]<<" pages ";
           
        }
       
        
    }
};
int main()
{
    //
    Queue q;
    int n, element;

    while (true)
    {
        cin >> n;

        if (n == 1)
        {
            cin >> element;
            q.enqueue(element);
        }
        else if (n == 2)
        {
            cout << "Processing print job: ";
            q.dequeue();
            cout << "pages"<<endl;
        }
        else if (n == 3)
        {
           q.display();
            break;
            cout<<"\n";
        }
        else
        {
            cout << "Invalid option." << endl;
            break;
        }
    }
}