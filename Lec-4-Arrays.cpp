#include <iostream>
using namespace std;

int main() {

    // ================================================================
    // ARRAY DECLARATION
    // ================================================================
    // Explanation :
    // Array ek data structure hai jo same type ke elements ko store karta hai.
    // Size fixed hota hai. Index 0 se start hota hai.
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;   // Abhi array mein 5 elements stored hain.

    // ================================================================
    // TRAVERSAL (array ko print karna)
    // ================================================================
    cout << "Initial Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";   // Explanation: Har element ko access karke print kar rahe hain.
    }
    cout << "\n\n";

    // ================================================================
    // ACCESS (kisi index ka element lena)
    // ================================================================
    int index;
    cout << "Enter index to access (0 to " << size - 1 << "): ";
    cin >> index;

    // Explanation :
    // arr[index] se hum directly kisi bhi position ka element le sakte hain.
    cout << "Access result: " << arr[index] << "\n\n";

    // ================================================================
    // UPDATE (kisi index par new value lagana)
    // ================================================================
    cout << "Enter index to update: ";
    cin >> index;

    cout << "Enter new value: ";
    int newValue;
    cin >> newValue;

    // Explanation:
    // Update direct hota hai — O(1) time.
    arr[index] = newValue;

    cout << "Array after update: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // ================================================================
    // INSERT (manual simulation)
    // ================================================================
    // Explanation :
    // Insert karne ke liye hume right shift karna padta hai
    // taaki new element ke liye jagah ban sake.
    int pos, val;
    cout << "Enter position to insert (0 to " << size << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> val;

    // Elements ko right shift kar rahe hain
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;  // Insert new value
    size++;          // Ab size ek badh gaya

    cout << "Array after insert: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // ================================================================
    // DELETE (manual simulation)
    // ================================================================
    // Explanation :
    // Delete ke liye hume left shift karna padta hai
    // taaki unwanted element overwrite ho jaye.
    cout << "Enter position to delete (0 to " << size - 1 << "): ";
    cin >> pos;

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];   // Left shift
    }

    size--;   // Ek element delete ho gaya

    cout << "Array after delete: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    cout << "End of array demonstration.\n";
    return 0;
}