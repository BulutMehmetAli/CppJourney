#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string haystack, needle;

    cout << "Enter the haystack string: ";
    getline(cin, haystack);
    cout << "Enter the needle string: ";
    getline(cin, needle);

    cout << "Haystack: " << haystack << endl;
    cout << "Needle: " << needle << endl;

    vector<int> indices;
    int haystackLength = haystack.size(), needleLength = needle.size();

    if (needleLength == 0) return 0; // If needle is empty, exit

    // Loop to find all occurrences of the needle in the haystack
    for (int i = 0; i <= haystackLength - needleLength; i++) {
        if (haystack.substr(i, needleLength) == needle) {
            indices.push_back(i); // Store the index where needle occurs
        }
    }

    // Print the indices where the needle was found
    if (indices.empty()) {
        cout << "No occurrences found." << endl;
    } else {
        cout << "Needle found at indices: ";
        for (int i = 0; i < indices.size(); i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
