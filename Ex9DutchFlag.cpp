#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int nums[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] != 0 && nums[i] != 1 && nums[i] != 2) {
            cout << "Nhap lai phan tu thu " << i << ": ";
            cin >> nums[i];
        }
    }
    vector<int> zero;
    vector<int> one;
    vector<int> two;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            zero.push_back(nums[i]);
        } else if (nums[i] == 1) {
            one.push_back(nums[i]);
        } else {
            two.push_back(nums[i]);
        }
    }
    cout << "Mang sau khi sap xep: ";  
    for (int i = 0; i < zero.size(); i++) {
        cout << zero[i] << ",";
    }
    for (int i = 0; i < one.size(); i++) {
        cout << one[i] << ",";
    }
    for (int i = 0; i < two.size(); i++) {
        cout << two[i] << ",";
    }
}