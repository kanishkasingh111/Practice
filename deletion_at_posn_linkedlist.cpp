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
    int pos;
    cout << "\nEnter position to delete: ";
    cin >> pos;
    if(head == NULL)
    {
        cout << "\nList is already empty.\n";
    }
    else if(pos == 1)    // delete first node
    {
        temp = head;
        head = head->next;
        delete temp;
        cout << "\nDeleted node at position 1.\n";
    }
    else
    {
        temp = head;
        node *prev = NULL;
        int count = 1;
        while(temp != NULL && count < pos)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        if(temp == NULL)
        {
            cout << "\nInvalid position! No node deleted.\n";
        }
        else
        {
            prev->next = temp->next;
            delete temp;
            cout << "\nDeleted node at position " << pos << ".\n";
        }
    }
    // Display list
    temp = head;
    cout << "\nLinked List after deletion: ";
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    return 0;
}
