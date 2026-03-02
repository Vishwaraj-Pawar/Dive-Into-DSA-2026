#include <iostream>
#include <vector>
using namespace std;

int main() {

    // ---------------------------------------
    // Vector Declaration
    // ---------------------------------------
    vector<int> v;   // dynamic array jaisa behave karta hai

    // ---------------------------------------
    // Push Back (add elements)
    // ---------------------------------------
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // ---------------------------------------
    // Traversal (index based printing)
    // ---------------------------------------
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";  // index se access
    }
    cout << endl;

    // ---------------------------------------
    // Accessing an element
    // ---------------------------------------
    cout << "Element at index 2: " << v[2] << endl;

    // ---------------------------------------
    // Updating an element
    // ---------------------------------------
    v[1] = 200; // index 1 ki value update
    cout << "After update at index 1: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ---------------------------------------
    // Insert at specific index WITHOUT iterator
    // manual shifting
    // ---------------------------------------
    int index = 2;
    int value = 99;

    // vector me space create karne ke liye push_back
    v.push_back(0); // extra slot at end

    // elements ko right shift karna
    for (int i = v.size() - 1; i > index; i--) {
        v[i] = v[i - 1];
    }

    // value ko index par daal diya
    v[index] = value;

    cout << "After insertion at index 2: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ---------------------------------------
    // Delete at specific index WITHOUT erase
    // manual left shift
    // ---------------------------------------
    int delIndex = 3;

    // elements ko left shift
    for (int i = delIndex; i < v.size() - 1; i++) {
        v[i] = v[i + 1];
    }

    // last element ko remove kiya
    v.pop_back();

    cout << "After deletion at index 3: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // ---------------------------------------
    // Pop back example
    // ---------------------------------------
    v.pop_back(); // last element hata diya

    cout << "After pop_back: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}