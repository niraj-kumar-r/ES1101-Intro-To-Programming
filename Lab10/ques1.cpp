#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *createNode(int value);
void display(node *p);

int main(void)
{
    node *head, *b, *a;

    int x = 0;
    cin >> x;

    head = b = createNode(x);

    cin >> x;
    while (x != -1)
    {
        a = createNode(x);
        b->next = a;
        b = b->next;
        cin >> x;
    }

    display(head);

    return 0;
}

node *createNode(int value)
{
    node *p;
    p = new node;
    p->data = value;
    p->next = NULL;

    return p;
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << '\n';
}