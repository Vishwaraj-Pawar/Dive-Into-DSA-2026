#include <iostream>
using namespace std;

int main() {

    int n = 5; 
    // Hinglish: Hum 5 rows ka pattern bana rahe hain.

    // -----------------------------------------------------
    // 1. Square Pattern
    // -----------------------------------------------------
    //  Nested loop se har row me n stars print karte hain.
    cout << "Square Pattern:\n";
    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) {     
            cout << "* ";
        }
        cout << endl; 
    }

    cout << endl;

    // -----------------------------------------------------
    // 2. Right Angle Triangle
    // -----------------------------------------------------
    //  Isme row number ke hisab se stars badhte jaate hain.
    cout << "Right Angle Triangle:\n";
    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= i; j++) {    
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // -----------------------------------------------------
    // 3. Inverted Triangle
    // -----------------------------------------------------
    // Yaha har new row me stars kam hote jaate hain.
    cout << "Inverted Triangle:\n";
    for (int i = n; i >= 1; i--) {      
        for (int j = 1; j <= i; j++) {  
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // -----------------------------------------------------
    // 4. Pyramid Pattern
    // -----------------------------------------------------
    //  Pehle space print karte hain phir star taaki proper pyramid ban sake.
    cout << "Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {

        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // -----------------------------------------------------
    // 5. Number Triangle
    // -----------------------------------------------------
    //  Row number jitne baar print karte hain.
    cout << "Number Triangle:\n";
    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= i; j++) {    
            cout << i << " ";            
        }
        cout << endl;
    }

    return 0;
}