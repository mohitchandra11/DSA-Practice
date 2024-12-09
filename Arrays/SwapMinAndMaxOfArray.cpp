// Program to swap the minimum and maximum elements in an array
#include <iostream>
#include <climits>
using namespace std;

void SwapMinAndMax(int arr[], int size) {
    int min1 = INT_MAX, max1 = INT_MIN;
    int min_i = -1, max_i = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] < min1) {
            min1 = arr[i];
            min_i = i;
        }
        if (arr[i] > max1) {
            max1 = arr[i];
            max_i = i;
        }
    }

    swap(arr[min_i], arr[max_i]);

    cout << "Array after swapping minimum and maximum elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 45, 7, 1};
    int size = sizeof(arr) / sizeof(int);

    SwapMinAndMax(arr, size);

    return 0;
}
