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
    if(head == NULL)
    {
        cout << "\nList is already empty.\n";
    }
    else
    {
        temp = head;
        head = head->next;  
        delete temp;        
        cout << "\nDeleted first node successfully.\n";
    }
    temp = head;
    cout << "\nLinked List after deletion at beginning: ";
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
