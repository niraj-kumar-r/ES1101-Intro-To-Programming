#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *createNode(int value);
void display(node *p);
node *deleteNode(node *p, int k);

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
    int k = 1;
    cout << "Enter the node position to be removed: ";
    cin >> k;
    cout << "Before\n";
    display(head);
    head = deleteNode(head, k);
    cout << "\nAfter\n";
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

node *deleteNode(node *p, int k)
{
    node *head = p;

    if (k == 1)
    {
        p = p->next;
        delete head;
        return p;
    }

    else
    {

        for (int i = 0; i < k - 2; i++)
        {
            p = p->next;
        }

        node *prev = p;
        node *kthNode = prev->next;
        node *after = kthNode->next;

        prev->next = after;
        delete kthNode;
        return head;
    }
}