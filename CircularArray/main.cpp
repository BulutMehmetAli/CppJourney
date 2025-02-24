#include <iostream>

using namespace std;

void print(char a[] , int n , int ind){

    for(int i=ind;i<n+ind;i++){
        cout << a[(i%n)] << " " ;
    }
}


int main()
{
    char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n, 3);
    return 0;
}
