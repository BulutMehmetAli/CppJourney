#include <iostream>
#include <vector>
#include <algorithm>  // For reverse() function
#include <unordered_map>

using namespace std;

vector<int> twoPointersTechnique(vector<int> vec) {

    int right = vec.size() - 1; // Pointer at the last element
    int left = 0;               // Pointer at the first element
    vector<int> newVector;      // Vector to store the sorted squares

    while (left <= right) { // Continue until left and right pointers meet

        int leftSquare = vec[left] * vec[left];   // Square of the leftmost element
        int rightSquare = vec[right] * vec[right]; // Square of the rightmost element

        // Insert the larger squared value first to maintain order
        if (leftSquare > rightSquare) {
            newVector.push_back(leftSquare);
            left++;  // Move left pointer forward
        } else {
            newVector.push_back(rightSquare);
            right--; // Move right pointer backward
        }
    }

    // Reverse the array to get the correct ascending order
    reverse(newVector.begin(), newVector.end());

    return newVector;
}

vector<int> twoSumSorted(vector<int>& arr, int target) {
    // Sorting is required for this technique to work correctly
    sort(arr.begin(), arr.end());

    int right = arr.size() - 1; // Pointer at the last element
    int left = 0;               // Pointer at the first element
    int result = target;        // Store the target sum

    while (left < right) { // Continue until left and right pointers meet

        // If the sum of two elements equals the target, return their indices
        if ((arr[right] + arr[left] == result)) {
            return {left, right};
        } else {
            right--; // Move right pointer backward
            left++;  // Move left pointer forward
        }
    }

    return {}; // Return an empty vector if no solution is found
}

int main()
{
    // Example usage of twoPointersTechnique function
    vector<int> arr = {-2, 0, 1, 5, 6};
    vector<int> sortedVector = twoPointersTechnique(arr);

    cout << "Sorted Squares: ";
    for (int num : sortedVector) {
        cout << num << " ";
    }
    cout << endl;

    cout << "*************" << endl;

    // Example usage of twoSumSorted function
    vector<int> sumTwoPointerTechniques = {1, 2, 3, 4, 6, 11};
    int target = 8;
    vector<int> result = twoSumSorted(sumTwoPointerTechniques, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
