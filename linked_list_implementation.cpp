//IMPLEMENTATION OF LINKED LIST...........

#include <iostream>
using namespace std;

struct node  {
    int data;
    struct node * next;
};
int main() {
    struct node * head = 0;
    struct node * temp = 0;
    struct node * newnode  = 0;
    int choice = 1;
    while (choice) {
        newnode  = new node ();   // allocate memory
        cout << "Enter data: ";
        cin >> newnode ->data;
        newnode ->next = 0;
        if (head == 0) {
            head = temp = newnode ;
        } else {
            temp->next = newnode ;
            temp = newnode ;
        }
        cout << "Do you want to continue (0/1)? ";
        cin >> choice;
    }
    temp = head;
    cout << "\nLinked List: ";
    while (temp != 0) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}

