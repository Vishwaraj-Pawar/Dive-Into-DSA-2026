#include <iostream>
using namespace std;

int main() {

    // ============================================================
    // 1. DATA TYPES & VARIABLES
    // ============================================================
    // int: yeh pure numbers store karta hai (jaise 10, -5, 200)
    int age = 20;

    // float: yeh decimal numbers store karta hai, thoda kam precision hoti hai
    float height = 5.7f;

    // double: yeh bhi decimal store karta hai, float se zyada accurate hota hai
    double salary = 55000.75;

    // char: ek single character store karta hai
    char grade = 'A';

    // bool: true ya false store karta hai (haan/naa wala type)
    bool isStudent = true;

    cout << "----- Data Types & Variables -----\n";
    cout << "Age (int): " << age << "\n";
    cout << "Height (float): " << height << "\n";
    cout << "Salary (double): " << salary << "\n";
    cout << "Grade (char): " << grade << "\n";
    cout << "Is Student (bool): " << isStudent << "\n\n";

    // ============================================================
    // 2. INPUT / OUTPUT
    // ============================================================
    // cin: user se input lene ke kaam aata hai
    // cout: output screen par print karta hai

    cout << "Enter your age: ";
    cin >> age;     // user jo value dalega, woh age mein store ho jayegi
    cout << "Your age is: " << age << "\n\n";

    // ============================================================
    // 3. OPERATORS
    // ============================================================
    // Operators: maths jaisi operations karne ke liye use hote hain

    int a = 12, b = 4;

    cout << "----- Operators -----\n";
    cout << "a + b = " << a + b << "   // addition \n";
    cout << "a - b = " << a - b << "   // subtraction \n";
    cout << "a * b = " << a * b << "   // multiplication \n";
    cout << "a / b = " << a / b << "   // division \n";
    cout << "a % b = " << a % b << "   // modulo: remainder nikalta hai\n\n";

    // ============================================================
    // 4. CONDITIONAL STATEMENTS
    // ============================================================
    // if-else: condition ke basis par decision lene ke liye use hota hai

    cout << "----- Conditionals -----\n";

    if (age >= 18) {     // agar age 18 ya usse zyada ho
        cout << "You are an adult.\n";   // yeh print hoga
    } else {             // warna yeh chalega
        cout << "You are a minor.\n";
    }
    cout << "\n";

    // ============================================================
    // 5. LOOPS
    // ============================================================
    // for loop: ek kaam ko baar-baar repeat karane ke liye

    cout << "----- Loop Example (Printing 1 to 5) -----\n";

    for (int i = 1; i <= 5; i++) {   // i 1 se start hota hai, 5 tak jata hai
        cout << i << " ";           // har round mein i print hota hai
    }
    cout << "\n\n";

    // ============================================================
    // END OF PROGRAM
    // ============================================================
    cout << "Program finished successfully.\n";

    return 0;
}