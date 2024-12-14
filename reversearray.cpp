// Write a program to reverse the elements of an array. For example, if the array

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    // Reverse the array
    for (int i = 0; i < SIZE / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[SIZE - 1 - i];
        numbers[SIZE - 1 - i] = temp;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}