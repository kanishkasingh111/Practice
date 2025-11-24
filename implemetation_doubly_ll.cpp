#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
void create() {
    int choice = 1;
    node *newnode, *temp;
    while (choice) {
        newnode = new node; 
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        cout << "Want to continue (0/1)? ";
        cin >> choice;
    }
}
void display() {
    node *temp = head;
    if (temp == NULL) {
        cout << "\nList is empty\n";
        return;
    }
    cout << "\nDoubly Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    create();
    display();
    return 0;
}
