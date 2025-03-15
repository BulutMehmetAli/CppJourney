#include <iostream>
#include <map>
using namespace std;

int convert(string s){
    map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    double sum = 0;
    for(int i=0;i<s.size();i++){

        if(i < s.size() - 1 &&  romanMap[s[i]]<romanMap[s[i+1]]){
            sum -= romanMap[s[i]];
        }else{
            sum += romanMap[s[i]];
        }

    }
    return sum;
}

int main()
{
    string s = "MCMXCIV";
    int x = convert(s);
    cout << x << endl;

    return 0;
}
