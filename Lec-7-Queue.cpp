#include <iostream>
using namespace std;

// Queue variables
int arr[100];    // queue array
int frontIndex = 0;  // front pointer
int rearIndex = -1;  // rear pointer
int capacity = 0;    // maximum queue size

// enqueue (insert)
void enqueue(int x) {
    if (rearIndex == capacity - 1) {
        cout << "Queue Overflow\n";
        return;
    }
    rearIndex++;        // rear aage badhao
    arr[rearIndex] = x; // element insert
}

// dequeue (remove)
void dequeue() {
    if (frontIndex > rearIndex) {
        cout << "Queue Underflow\n";
        return;
    }
    frontIndex++;       // front aage badhao, element remove ho gaya
}

// peek front element
int peek() {
    if (frontIndex > rearIndex) {
        cout << "Queue is Empty\n";
        return -1;
    }
    return arr[frontIndex];
}

// display queue
void display() {
    if (frontIndex > rearIndex) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = frontIndex; i <= rearIndex; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    capacity = 5; // queue size set kiya

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    cout << "Front element: " << peek() << endl;

    dequeue();
    dequeue();

    display();

    return 0;
}