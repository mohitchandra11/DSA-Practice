// Program to rotate an array to the left by a specified number of positions
#include <iostream>
using namespace std;

void RotateArray(int arr[], int size, int d) {
    for (int i = 0; i < d; i++) {
        int first = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = first;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    RotateArray(arr, size, d);
    return 0;
}
