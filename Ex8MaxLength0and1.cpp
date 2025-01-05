#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void maxArray(vector<int>& arr) {
    unordered_map<int, int> map;
    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += (arr[i] == 0) ? -1 : 1;

        if (sum == 0) {
            max_len = i + 1;
        }

        if (map.find(sum) != map.end()) {
            max_len = max(max_len, i - map[sum]);
        } else {
            map[sum] = i;
        }
    }
    cout << max_len;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    maxArray(nums);
}