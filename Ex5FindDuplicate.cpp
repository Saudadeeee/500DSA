#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int nums[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    //Su dung map de tu sap xep lai cac phan tu 

    int numMap[n] = {0};
    for (int i = 0; i < n; i++) {
        numMap[nums[i]]++;
    }
    cout << "Phan tu trung nhau la: ";
    for (int i = 0; i < n; i++) {
        if (numMap[i] > 1) {
            cout << i << " ";
        }
    }

    return 0;
}