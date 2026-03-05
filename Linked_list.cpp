//to insert eleement at first place 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
Node(int value)
{
    data = value;
    next = NULL;
}
};
void print_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    Node* second = new Node(20);
    head = second;
    Node* third = new Node(30);
    second->next = third;
    Node* temp = head;
    cout<<"elements in list are: ";
    print_list(head);
    Node* first = new Node(10);
    first->next = head;
    head = first;
     temp = head;
     cout<<"after inserting node at starting : ";
     print_list(head);
    Node* fourth = new Node(40);
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next= fourth;
    temp = head;
    cout<<"after inserting at end: ";
    print_list(head);
    //inserting at index 2
    Node* ins = new Node(2);
    temp = head->next->next;
    ins->next = temp;
    head->next->next = ins;
    print_list(head);
    //deleting the last element in linked list
    temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    temp = head;
    cout<<"after deleting an element from end: ";
    print_list(head);

    return 0;

}