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
    node *first, *head, *a;

    int x = 0;
    cin >> x;

    first = head = createNode(x);

    cin >> x;
    while (x != -1)
    {
        a = createNode(x);
        head->next = a;
        head = head->next;
        cin >> x;
    }

    display(first);

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