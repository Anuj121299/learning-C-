#include <iostream>
using namespace std;

int main() {
    int a, r, rev = 0;
    
    cout << "Enter the digit: ";
    cin >> a;
    
    // Store the original number to 'b' if needed later
    int b = a;
    
    // Loop to reverse the number
    while (a > 0) {
        r = a % 10;  // Get the last digit
        rev = rev * 10 + r;  // Build the reversed number
        a = a / 10;  // Remove the last digit from 'a'
    }
    
    // Output the reversed number
    cout << "Reversed number: " << rev << endl;

    return 0;
}
