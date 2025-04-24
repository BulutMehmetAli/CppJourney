#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;  // nums1 içinde aktif elemanların son indexi
    int j = n - 1;  // nums2'nin son indexi
    int k = m + n - 1;  // nums1'in son indexi (toplam uzunluk - 1)
    int temp = k;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        }else {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }


}
int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 0;
    int n = nums2.size();
    for (int i = 0; i < nums1.size(); i++) {
        if (nums1[i] != 0) {
            m++;
        }else {
            break;
        }
    }
    merge(nums1,m , nums2, n);
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    return 0;
}