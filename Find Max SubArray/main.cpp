#include <iostream>

using namespace std;

int max_Sum(int arr[] , int k , int n){
    int sum = 0;
    for(int i = 0;i<=n-k;i++){
        int temp = 0;
        for(int j = i;j<i+k;j++){
            temp+=arr[j];
        }if(temp>sum){
            sum = temp;
        }
    }
    return sum;
}
int main(){
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = max_Sum(arr,k,n);
    cout << result << endl;
    return 0;
}
