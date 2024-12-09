#include <iostream>
#include <vector> // Include vector library
using namespace std;

int main() {
    // Step 1: Declaring a vector
    vector<int> vec; // Declares an empty vector of integers
    cout << "Initial size of vec: " << vec.size() << endl;

    // Step 2: Adding elements using push_back
    vec.push_back(10); // Adds 10 to the vector
    vec.push_back(20); // Adds 20 to the vector
    vec.push_back(30); // Adds 30 to the vector
    cout << "Elements after push_back: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Step 3: Accessing elements using at() and operator[]
    cout << "Element at index 0 using at(): " << vec.at(0) << endl;
    cout << "Element at index 1 using operator[]: " << vec[1] << endl;

    // Step 4: Modifying elements
    vec[1] = 50; // Changes the second element to 50
    cout << "Modified vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Step 5: Removing elements using pop_back
    vec.pop_back(); // Removes the last element
    cout << "After pop_back: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Step 6: Size and capacity
    cout << "Current size: " << vec.size() << endl;
    cout << "Current capacity: " << vec.capacity() << endl;

    // Step 7: Using clear() to remove all elements
    vec.clear();
    cout << "Size after clear: " << vec.size() << endl;

    // Step 8: Using an initializer list
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout << "Initialized vector: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    // Step 9: Iterators with vectors
    cout << "Using iterators to traverse vec2: ";
    for (auto it = vec2.begin(); it != vec2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Step 10: Using size(), empty(), and resize()
    cout << "Size of vec2: " << vec2.size() << endl;
    cout << "Is vec2 empty? " << (vec2.empty() ? "Yes" : "No") << endl;
    vec2.resize(3); // Resize to hold only 3 elements
    cout << "After resizing to 3 elements: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    // Step 11: Insert and erase
    vec2.insert(vec2.begin() + 1, 100); // Insert 100 at index 1
    cout << "After inserting 100 at index 1: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    vec2.erase(vec2.begin() + 2); // Remove element at index 2
    cout << "After erasing the element at index 2: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    // Step 12: Swapping two vectors
    vector<int> vec3 = {10, 20, 30};
    cout << "Before swapping:\n";
    cout << "vec2: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << "\nvec3: ";
    for (int i : vec3) {
        cout << i << " ";
    }
    cout << endl;

    vec2.swap(vec3); // Swap the contents of vec2 and vec3
    cout << "After swapping:\n";
    cout << "vec2: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << "\nvec3: ";
    for (int i : vec3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
