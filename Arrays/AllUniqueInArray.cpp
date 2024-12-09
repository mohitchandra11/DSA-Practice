// Program to find and display unique values in an array

#include <iostream>
using namespace std;

void UniqueValues(int arr[], int size) {
    bool hasUnique = false; // To check if any unique values exist

    for (int i = 0; i < size; i++) {
        bool isUnique = true; // Assume the current element is unique

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false; // Found a duplicate
                break;
            }
        }

        // If the current element is unique, print it
        if (isUnique) {
            cout << arr[i] << " ";
            hasUnique = true;
        }
    }

    if (!hasUnique) {
        cout << "No unique values found.";
    }
}

int main() {
    int arr[] = {12, 12,13,1}; // Modify array as needed
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the correct size
    UniqueValues(arr, size);
    return 0;
}
