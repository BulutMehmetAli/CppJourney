#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string haystack, needle;
    cout << "Haystack string'ini girin: ";
    getline(cin, haystack);
    cout << "Needle string'ini girin: ";
    getline(cin, needle);
    cout << "Haystack: " << haystack << endl;
    cout << "Needle: " << needle << endl;
    vector<int> vec;
    int h = haystack.size(), n = needle.size();
    if (n == 0) return 0;
    for (int i = 0; i <= h - n; i++) {
    if (haystack.substr(i, n) == needle)
            vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    return 0;
}
