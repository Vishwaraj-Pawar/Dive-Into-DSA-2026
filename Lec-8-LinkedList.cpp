#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;        // node ka data
    Node* next;      // next node ka pointer
};

// head pointer (global)
Node* head = nullptr;

// -----------------------------------------
// Create and Insert Node at End
// -----------------------------------------
void insertAtEnd(int value) {
    // naya node banaya
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    // agar list empty hai
    if (head == nullptr) {
        head = newNode;    // head ko connect kar diya
        return;
    }

    // last node tak traversal
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // last ke baad naya node attach
    temp->next = newNode;
}

// -----------------------------------------
// Traversal (print all nodes)
// -----------------------------------------
void traversal() {
    if (head == nullptr) {
        cout << "List is Empty\n";
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";   // har node ka data print
        temp = temp->next;
    }
    cout << endl;
}

// -----------------------------------------
// Delete Node by Value
// -----------------------------------------
void deleteByValue(int value) {
    if (head == nullptr) {
        cout << "List is Empty\n";
        return;
    }

    // agar first node hi delete karna ho
    if (head->data == value) {
        Node* del = head;
        head = head->next;    // head ko next par move kar diya
        delete del;
        return;
    }

    // kisi middle/end node ko delete karna
    Node* temp = head;
    
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    // value not found
    if (temp->next == nullptr) {
        cout << "Value not found in List\n";
        return;
    }

    // node found → delete
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

int main() {

    // inserting nodes at end
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    traversal();

    // deleting a node by value
    deleteByValue(30);
    traversal();

    deleteByValue(10);
    traversal();

    deleteByValue(100); // value not found

    return 0;
}