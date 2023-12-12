#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void insertathead(node *&head, int data)
{
    node *n = new node;
    n->data = data;
    n->next = head;
    head = n;
}
void insertattail(node *&head, int data)
{
    if (head == NULL)
    {
        insertathead(head, data);
        return;
    }
    node *n = new node;
    n->data = data;
    n->next = NULL;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deleteatkey(node *&head, int key)
{
    node *temp = head;
    node *prev = NULL;
    while (temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}
void deleteathead(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}
node* reverseityerative(node *&head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node* reverserecursive(node * &head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node* reverse_knodes(node* &head ,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while (currptr!=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr!=NULL)
    {
        head->next = reverse_knodes(nextptr,k);
    }
    return prevptr;
    
}
 

int main()
{

    node *head = NULL;
    insertattail(head, 5);
    insertattail(head, 6);
    insertattail(head, 7);
    insertattail(head, 8);
    insertattail(head, 9);
    insertattail(head, 10);
    insertattail(head, 11);
    insertattail(head, 12);
    insertattail(head, 13);

    
    
   
    head =reverserecursive(head);
    head = reverse_knodes(head,3);
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";



    return 0;
}