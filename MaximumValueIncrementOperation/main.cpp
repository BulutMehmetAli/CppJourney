#include <iostream>
#include <vector>
using namespace std;

// v = myVector , n = size of vector ,  iI = initial Point , fI = final index , i = increment amount
vector<int> incOpr(vector<int> v, int iI , int fI , int i){

    int sub = fI-iI;
    while(sub>=0){
        v[iI]+=i;
        sub--;
        iI++;
    }
    return v;

}
void show(vector<int> myVector){

    for(int i=0;i<myVector.size();i++){
        cout << myVector[i] << " " ;
    }
    cout << endl;

}
int main()
{

    vector<int> myVector = {0,0,0,0,0,0,0,0};
    myVector = incOpr(myVector,0,3,100);
    show(myVector);
    myVector = incOpr(myVector,2,5,100);
    show(myVector);
    myVector = incOpr(myVector,1,4,100);
    show(myVector);
    myVector = incOpr(myVector,3,6,100);
    show(myVector);


    return 0;
}
