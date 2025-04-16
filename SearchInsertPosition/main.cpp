#include <iostream>
#include <vector>
using namespace std;
int searchPosition(vector<int> vec , int value){
     for (int i = 0; i < vec.size(); i++) {
        if (value <= vec[i]) {
            return i;
        }
    }
    return vec.size();

}
int main()
{
    vector<int> myVector = {1,8,9,13,26};
    int number = 28;
    int result = searchPosition(myVector , number);
    cout << result;
    return 0;
}
