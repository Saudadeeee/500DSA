#include <iostream>
#include <vector>

using namespace std;

void mergeArray(int arr[], int n, int brr[], int m, int crr[],int kk) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr[i] < brr[j]) {
            crr[k++] = arr[i++];
        } else {
            crr[k++] = brr[j++];
        }
    }
    while (i < n) {
        crr[k++] = arr[i++];
    }
    while (j < m) {
        crr[k++] = brr[j++];
    }
    cout << "Mang 1 sau khi gop: ";
    for (int i = 0; i < n; i++) {
        cout << crr[i] << " ";
    }
    cout << endl;
    cout << "Mang 2 sau khi gop: ";
    for (int i = n; i < kk; i++) {
        cout << crr[i] << " ";
    }

}

int main(){
    int n;
    cout << "Nhap so luong phan tu mang 1: ";
    cin >> n;
    int arr[n];
    cout << "Nhap cac phan tu da sap xep: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "Nhap so luong phan tu mang 2: ";
    cin >> m;
    int brr[m];
    cout << "Nhap cac phan tu da sap xep: ";
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    int k = n + m;
    int crr[k];
    mergeArray(arr, n, brr, m, crr, k);
}