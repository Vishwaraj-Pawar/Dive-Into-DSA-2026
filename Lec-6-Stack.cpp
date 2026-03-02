#include <iostream>
using namespace std;

// Stack variables
int arr[100];   // stack array
int top = -1;   // top index
int capacity = 0; // maximum size set by user

// push operation
void push(int x) {
    if (top == capacity - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    arr[top] = x;   // element ko top par daal diya
}

// pop operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    top--;   // top reduce karne se element remove ho jata hai
}

// peek operation
int peek() {
    if (top == -1) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return arr[top];
}

// display stack
void display() {
    if (top == -1) {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    capacity = 5; // stack size set kiya

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    cout << "Top element: " << peek() << endl;

    pop();
    pop();

    display();

    return 0;
}