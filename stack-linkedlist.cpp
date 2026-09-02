#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top = NULL;

    void push(int x)
    {
        Node *newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if(top == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout<<endl;
            cout << top->data << " deleted" << endl;
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void peek()
    {
        if(top == NULL)
            cout << "Stack is Empty" << endl;
        else
            cout << "Top Element = " << top->data << endl;
    }

    void display()
    {
        Node *temp = top;

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.peek();

    return 0;
}