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
        if (newnode == nullptr) {
            cout << "Memory allocation failed!\n";
            return 1;
        }
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = nullptr;
        if (head == nullptr) {
            head = newnode;  
        }
        else {
            temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout << "Do you want to insert more nodes (0/1)? ";
        cin >> choice;
    }
    cout << "Linked List: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    return 0;
}
