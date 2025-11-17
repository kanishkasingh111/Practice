// Insertion at beginning in linked list 

#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
int main() {
    node *head = nullptr, *newnode, *temp;
    int choice = 1;
    while (choice) {
        newnode = new node;   
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = head;
        head = newnode;
        cout << "Do you want to insert more nodes (0/1)? ";
        cin >> choice;
    }
    cout << "Linked List: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    return 0;
}
