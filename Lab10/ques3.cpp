#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *createNode(int value);
void display(node *p);
node *reverseLinkedList(node *head);

int main(void)
{
    int n = 3;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    int x = 0;
    cout << "Enter Node value: ";
    cin >> x;

    node *head, *presentNode, *nextNode;
    head = presentNode = createNode(x);

    for (int i = 1; i < n; i++)
    {
        cout << "Enter Node value: ";
        cin >> x;
        nextNode = createNode(x);
        presentNode->next = nextNode;
        presentNode = nextNode;
    }
    cout << "Before\n";
    display(head);
    head = reverseLinkedList(head);
    cout << "After\n";
    display(head);
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

node *reverseLinkedList(node *head)
{
    node *currentNode = head;
    node *prevNode = NULL, *nextNode = NULL;

    while (currentNode != NULL)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    return prevNode;
}