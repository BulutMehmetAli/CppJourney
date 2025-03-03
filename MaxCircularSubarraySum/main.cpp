#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int kruskalsAlgorithm(vector<int> &arr){

    int maxSum = arr[0];
    int currentSum = arr[0];
    for(int i = 1;i<arr.size();i++){
        currentSum = max(arr[i] , arr[i] + currentSum);
        maxSum = max(currentSum,maxSum);
    }
    return maxSum;

}
int totalmin(vector<int> &arr){
    int minSum = arr[0];
    int currentSum = arr[0];
    for(int i = 1;i<arr.size();i++){
        currentSum = min(arr[i] , arr[i] + currentSum);
        minSum = min(currentSum,minSum);
    }
    return minSum;
}
int findCircularMaxSubarray(vector<int> &arr){

    int total = 0;
    int findMaxCirc = kruskalsAlgorithm(arr);
    int findMinCirc = totalmin(arr);

    for(int i=0;i<arr.size();i++){
        total+=arr[i];
    }
    return max(findMaxCirc,(total-findMinCirc));

}
int main() {

    vector<int> arr = {10, -3, -4, 7, 6, 5, -4, -1};
    int result = findCircularMaxSubarray(arr);
    cout << result << endl;
   return 0;
}
