#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

class Queue
{
public:
    int data[SIZE];
    int front, rear;

    void initialize()
    {
        front = rear = -1;
    }

    bool isempty()
    {
        return front == -1;
    }

    bool isfull()
    {
        return rear == SIZE - 1;
    }

    void enqueue(int info)
    {
        if (isfull())
        {
            cout << "Queue is overflow" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = rear + 1;
        data[rear] = info;
    }

    int dequeue()
    {
        if (isempty())
        {
            cout << "Queue is underflow" << endl;
            return -1;
        }

        int item = data[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = front + 1;
        }

        return item;
    }

    void traverse()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << data[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.initialize();

    int ch, info;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Traverse";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter element: ";
            cin >> info;
            q.enqueue(info);
            break;

        case 2:
        {
            int item = q.dequeue();

            if (item != -1)
                cout << "Deleted element: " << item << endl;

            break;
        }

        case 3:
            q.traverse();
            break;

        case 4:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (ch != 4);

    return 0;
}