#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        node* next;
    };
    node *head = NULL, *newnode, *temp;
    int choice = 1;
    while(choice)
    {
        newnode = new node;
        cout << "Enter data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Do you want to continue (0/1)? ";
        cin >> choice;
    }
    node *prev = NULL, *current = head, *nextptr = NULL;
    while(current != NULL)
    {
        nextptr = current->next;  
        current->next = prev;     
        prev = current;           
        current = nextptr;        
    }
    head = prev;
    cout << "\nReversed Linked List: ";
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
