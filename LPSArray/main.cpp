#include <iostream>
#include <vector>
using namespace std;
vector<int> kMP(vector<char> &vec){
    vector<int> newVector(vec.size(),0);
    int j=0;
    int i=1;
    while(i<vec.size()){
        if(vec[i]==vec[j]){
            j++;
            newVector[i]=j;
            i++;
        }else{
            if(j>0){
                j=newVector[j-1];
            }else{
                newVector[i]=0;
                i++;
            }
        }
    }

    return newVector;
}
int main()
{
    vector<char> myVector = {'A', 'B', 'A', 'B', 'B', 'A', 'A', 'A', 'B', 'B', 'A', 'A', 'A', 'A', 'B', 'A', 'A', 'B', 'A'};
    vector<int> arrVec = kMP(myVector);
    for(int i=0;i<arrVec.size();i++){
        cout << arrVec[i] << " ";
    }
    cout << endl;
    return 0;
}
