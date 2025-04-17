#include <iostream>
#include <vector>
#include <string> // for std::to_string and std::stoi

using namespace std;

vector<int> plusOne(vector<int>& vec) {
    int n = vec.size();

    // Step 1: Traverse the vector from the last element
    for (int i = n - 1; i >= 0; i--) {
        if (vec[i] < 9) { // If current digit is less than 9, just increment it
            vec[i]++;
            return vec; // No carry-over, return the result
        }
        // If the current digit is 9, set it to 0 (carry-over)
        vec[i] = 0;
    }

    // Step 2: If all digits were 9, we need to add a new digit at the beginning
    vec.insert(vec.begin(), 1);

    return vec; // Return the updated vector
}

int main() {
    vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Example input
    vector<int> result = plusOne(vec);

    // Print the updated vector
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
