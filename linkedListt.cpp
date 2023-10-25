#include <bits/stdc++.h>
using namespace std;
// first node pe hi tail bhe hoga head bhi hoga
// singly link list
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int data)
{
    // Creating a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insert_at_tail(Node *&tail, int data)
{
    // creating a node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insert_at_position(Node *&head, Node *&tail, int data, int position)
{
    // special case pos 1;
    if (position == 1)
    {
        insert_at_head(head, data);
        return;
    }
    // creating a node;
    Node *nodeToInsert = new Node(data);
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(tail, data);
        return;
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void delete_node_pos(Node *&head, Node *&tail, int position)
{
    // positon 1 special case;
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next; // temp not change  , temp = head abhi bhi hai
        temp->next = NULL;
        free(temp);
    }
    else
    {
        // case handel at middle position
        int count = 1;
        Node *curr = head;
        Node *previous = NULL;
        while (count < position)
        {
            previous = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            previous->next = curr->next;
            curr->next = NULL;
            tail = previous;
        }
        else
        {
            previous->next = curr->next;
            curr->next = NULL;
            free(curr);
        }
    }
}

Node *reverse_linked_list(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
/*
// APPROCH 1 {T.C : O(N)   S.C. : O(1)}
void middleElement(Node *head)
{
    int lenght = getLength(head);
    int ans = (lenght / 2);
    Node *temp = head;

    int count = 0;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    cout << "The middle data of linked list: " << temp->data << endl;
}
*/

// APPROCH 1 {T.C : O(1)   S.C. : O(1)}
void middleElement(Node *head)
{
    Node *temp = head;
    Node *slow = temp;
    Node *fast = temp->next;
    if (temp == NULL || temp->next == NULL)
    {
       cout << "The middle data of linked list: " << temp->data << endl;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        if(fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    cout << "The middle data of linked list: " << slow->data << endl;
}
void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // Creating a new node

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    // cout << head->data << endl;

    // insert node at head
    insert_at_head(head, 5);
    insert_at_head(head, 4);

    // traverse a linklist list
    traverse(head);
    cout << "\n";

    // insert at head
    insert_at_tail(tail, 20);
    insert_at_tail(tail, 100);

    // traverse a linklist list
    traverse(head);
    cout << "\n";

    
    // insert at position
    insert_at_position(head, tail, 30, 1);
    insert_at_position(head, tail, 15, 2);
    insert_at_position(head, tail, 200, 8);



    // traverse a linklist list
    traverse(head);
    cout << "\n";



    // check head and tail ;
    // cout << "\nHead: " << head->data << " Tail: " << tail->data;


    // delete a node
    delete_node_pos(head, tail, 1);

    // traverse a linklist list
    traverse(head);
    cout << "\n";

    // delete a node
    // delete_node_pos(head, tail, 4);

    // traverse a linklist list
    // traverse(head);
    // cout << "\n";

    // delete a node
    // delete_node_pos(head, tail, 6);

    // traverse a linklist list
    // traverse(head);

    // tail case handel;
    // cout << "\nTail: " << tail->data << endl;

    // reverse
    head = reverse_linked_list(head);
    traverse(head);
    cout << "\n";

    // The middle data of linked list
    middleElement(head);

    // Lenf=gth of linked list
    cout << "The lenght of the linked list <-> " << getLength(head) << endl;

    // all cases ar handle
}