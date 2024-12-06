#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> majorityElement(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return {};

    // Step 1: Find potential candidates
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
    for (int num : arr) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify the candidates
    count1 = count2 = 0;
    for (int num : arr) {
        if (num == candidate1) count1++;
        else if (num == candidate2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(candidate1);
    if (count2 > n / 3) result.push_back(candidate2);

    // Step 3: Return results in increasing order
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {3, 2, 3, 4, 2, 2, 2};
    vector<int> result = majorityElement(arr);

    if (result.empty()) {
        cout << "[]";
    } else {
        cout << "[";
        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) cout << ", ";
        }
        cout << "]";
    }
    return 0;
}
