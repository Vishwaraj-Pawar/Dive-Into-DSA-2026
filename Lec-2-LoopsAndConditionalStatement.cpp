#include <iostream>
using namespace std;

int main() {

    // ============================================================
    // CONDITIONAL STATEMENTS (if, else-if, else, nested if)
    // ============================================================

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    // ------------------------------------------------------------
    // if condition
    // ------------------------------------------------------------
    // Explaination: Agar condition true hoti hai toh andar ka code chalega.
    if (marks >= 90) {
        cout << "if example: A-grade student\n";
    }

    // ------------------------------------------------------------
    // if-else condition
    // ------------------------------------------------------------
    // Explaination: Agar condition true ho toh if wala chalega,
    // warna else wala chalega.
    if (marks >= 40) {
        cout << "if-else example: You passed the exam\n";
    } else {
        cout << "if-else example: You failed the exam\n";
    }

    // ------------------------------------------------------------
    // else-if ladder
    // ------------------------------------------------------------
    // Explaination: Multiple conditions check karne ke liye use hota hai.
    // Jaise hi koi condition true milti hai, baaki skip ho jati hain.
    if (marks >= 90) {
        cout << "else-if example: Grade A\n";
    }
    else if (marks >= 75) {
        cout << "else-if example: Grade B\n";
    }
    else if (marks >= 50) {
        cout << "else-if example: Grade C\n";
    }
    else {
        cout << "else-if example: Grade D or Fail\n";
    }

    // ------------------------------------------------------------
    // Nested if (if ke andar if)
    // ------------------------------------------------------------
    // Explaination: Jab ek decision ke andar doosri condition check karni ho.
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool hasID;
    cout << "Do you have ID? (1 for yes, 0 for no): ";
    cin >> hasID;

    if (age >= 18) {                     // pehli badi condition
        if (hasID == 1) {               // phir chhoti condition
            cout << "Nested if example: Entry allowed\n";
        } else {
            cout << "Nested if example: ID nahi hai, entry nahi milegi\n";
        }
    } else {
        cout << "Nested if example: Age kam hai, entry denied\n";
    }


    // ============================================================
    // LOOPS (for, while, do-while)
    // ============================================================

    // ------------------------------------------------------------
    // for loop
    // ------------------------------------------------------------
    // Explaination:
    // Jab hame pata ho ki loop kitni baar chalana hai.
    // for(initialization; condition; update)
    // Har iteration ke baad update hota hai.
    cout << "\nFor loop example (1 to 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // ------------------------------------------------------------
    // while loop
    // ------------------------------------------------------------
    // Explaination:
    // Jab tak condition true hai tab tak loop chalega.
    // Iterations ki exact count pehle nahi pata ho tab useful hota hai.
    cout << "While loop example (1 to 5): ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;   // increment karna zaroori hai, nahi toh infinite loop
    }
    cout << "\n";

    // ------------------------------------------------------------
    // do-while loop
    // ------------------------------------------------------------
    // Explaination:
    // Yeh loop kam se kam 1 baar zaroor chalega
    // kyunki condition baad mein check hoti hai.
    cout << "Do-while loop example (1 to 5): ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    cout << "\n\nEnd of program.\n";

    return 0;
}