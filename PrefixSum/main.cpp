#include <iostream>

using namespace std;
void prefixSum(int arr[] , int n){
    int sum = 0;
    int convertArr[n];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        convertArr[i] = sum;
        cout << convertArr[i] << " " ;
    }
}
int main()
{
    int arr[] = {10,20,10,5,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    prefixSum(arr , n);
    return 0;
}
