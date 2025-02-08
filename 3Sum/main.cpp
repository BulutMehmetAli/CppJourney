// C++ program to find triplets with a sum of zero using three nested loops
// Optimized for better readability and efficiency

#include <iostream>
#include <vector>
using namespace std;

// Function to find triplets that sum up to zero
vector<vector<int>> findTriplets(const vector<int> &arr) {
    vector<vector<int>> result;
    int n = arr.size();

    // Iterate through all possible triplets
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                // Check if the triplet sum equals zero
                if (arr[i] + arr[j] + arr[k] == 0) {
                    result.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    vector<vector<int>> triplets = findTriplets(arr);

    // Print the found triplets
    if (!triplets.empty()) {
        cout << "Triplets with sum zero:" << endl;
        for (const auto &triplet : triplets) {
            cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")" << endl;
        }
    } else {
        cout << "No triplets found with sum zero." << endl;
    }

    return 0;
}
