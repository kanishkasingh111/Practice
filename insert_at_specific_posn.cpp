#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}  // Constructor to initialize node
};
void printList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = new Node(data);
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    int i;
    for (i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete newNode; 
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    int position, data;
    cout << "Enter the position to insert the new node (1-based index): ";
    cin >> position;
    cout << "Enter the data to insert: ";
    cin >> data;

    insertAtPosition(head, data, position);

    printList(head);

    return 0;
}
