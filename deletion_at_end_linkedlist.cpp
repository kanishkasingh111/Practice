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
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        cout << "\nDeleted last node successfully.\n";
    }
    else
    {
        temp = head;
        node *prev = NULL;

        while(temp->next != NULL) 
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;   
        delete temp;         
        cout << "\nDeleted last node successfully.\n";
    }
    temp = head;
    cout << "\nLinked List after deletion at end: ";
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
