//#include <iostream>
//#include <list>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> convertLPSArray(vector<string> vec){
//    vector<int> newVector;
//    vector<int> converVector;
//    int temporal=0;
//    for(int i=0;i<vec.size();i++){
//        if(find(converVector.begin(), converVector.end(), vec[i]) != converVector.end()){
//            newVector[i]=temporal++;
//        }else{
//            converVector.push_back(vec[i]);
//            newVector[i]=0;
//            temporal=0;
//        }
//    }
//    return newVector;
//
//}
//
//int main() {
//
//    vector<string> myVector = {"A", "B", "A", "B", "C", "A", "B", "A", "B"};
//    vector<int> newVector = convertLPSArray(myVector);
//    for(int i=0;i<newVector.size();i++){
//        cout << newVector[i] << " ";
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> convertLPSArray(vector<char> vec){
    vector<int> newVector;
    vector<char> converVector;
    int temporal = 0;

    for(int i = 0; i < vec.size(); i++){
        if(find(converVector.begin(), converVector.end(), vec[i]) != converVector.end()){
            temporal++;
            newVector.push_back(temporal);
        } else {
            converVector.push_back(vec[i]);
            temporal = 0;
            newVector.push_back(temporal);
        }
    }
    return newVector;
}

int main() {
    vector<char> myVector = {'A', 'B', 'A', 'B', 'C', 'A', 'B', 'A', 'B'};
    vector<int> newVector = convertLPSArray(myVector);

    for(int i = 0; i < newVector.size(); i++){
        cout << newVector[i] << " ";
    }

    return 0;
}
