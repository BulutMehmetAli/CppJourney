#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> convertToNSE(vector<int> &arr){

    int n = arr.size();
    vector<int> newArr(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                newArr[i]=arr[j];
                break;
            }
        }
    }
    return newArr;
}

int main()
{
    vector<int> myArr = {13,7,6,12};
    vector<int> newArr = convertToNSE(myArr);
    for(int x:newArr){
        cout << x << " " ;
    }
    cout << endl;
    return 0;
}
