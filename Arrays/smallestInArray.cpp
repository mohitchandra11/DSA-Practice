// Program to find the smallest element in an array and its index
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int index = -1; // Initialize to an invalid value for safety.
    int n;
    int smallest = INT_MAX;

    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        if (arr[j] < smallest) {
            smallest = arr[j];
            index = j; // Update index when the smallest element is updated.
        }
    }

    cout << "Smallest element is: " << smallest << endl;
    cout << "Minimum index is present at index: " << index << endl;

    return 0;
}
