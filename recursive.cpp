// Write a recursive function int factorial(int n) that calculates the factorial of a
// given number n.
// In the main() function, prompt the user to enter a positive integer and call the
// factorial function to compute and display the result.
// Example: For input 5, the output should be 120.
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    }
    return 0;
}