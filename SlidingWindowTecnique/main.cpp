#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to find the maximum sum of any subarray of size `sizeOfWindow`
int maxSubarrSum(vector<int> &arr, int sizeOfWindow) {

    // Edge case: If the window size is larger than the array size, return 0
    if (sizeOfWindow > arr.size()) return 0;

    int sumOfSubarray = 0;  // Current window sum
    int maxSum = INT_MIN; // Stores the maximum sum found

    // Compute the sum of the first window
    for (int i = 0; i < sizeOfWindow; i++) {
        sumOfSubarray += arr[i];
    }

    maxSum = sumOfSubarray;  // Set initial maximum sum

    // Slide the window across the array
    for (int i = sizeOfWindow; i < arr.size(); i++) {
        sumOfSubarray += arr[i] - arr[i - sizeOfWindow]; // Add new element, remove old one
        maxSum = max(maxSum, sumOfSubarray); // Update max sum if needed
    }

    return maxSum; // Return the maximum sum found
}

int main() {
    vector<int> arr = {2, 1, 5, 11, 3, 2}; // Input array
    int windowSize = 3; // Window size

    int result = maxSubarrSum(arr, windowSize); // Call function
    cout << "Maximum subarray sum: " << result << endl; // Print result

    return 0;
}
