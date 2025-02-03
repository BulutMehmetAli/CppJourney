#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

// Function to remove duplicate elements from a sorted array
int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;

    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // Number of unique elements
}

// Function to find the minimum subarray length with sum at least `target`
int minSubarrayWithSum(vector<int>& arr, int target) {
    int left = 0, sum = 0, minLength = INT_MAX;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum >= target) {
            minLength = min(minLength, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }

    return (minLength == INT_MAX) ? -1 : minLength;
}

int main() {
    string s = "madam";
    cout << (isPalindrome(s) ? "It is a palindrome" : "It is not a palindrome") << endl;
    cout << "*****" << endl;

    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    int length = removeDuplicates(arr);

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    cout << endl;

    vector<int> arr2 = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << "Minimum subarray length: " << minSubarrayWithSum(arr2, target) << endl;

    return 0;
}
