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
    Queue(int size)
    {
        this->size = size;
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
            rear++;
        }
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty";
        }
        else
        {
            int a = arr[front];
            arr[front] = -1;
            front++;
            cout << a << " ";
            if (rear == front)
            {
                front = 0;
                rear = 0;
            }
        }
    }
};
 int main()
{
    int element, n;
    cin >> n;
    Queue q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        q.enqueue(element);
    }
    cout << "Dequeuing elements: ";
    while (n > 0)
    {
        q.dequeue();
        n--;
    }
}
