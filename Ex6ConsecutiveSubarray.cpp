#include <iostream>
#include <unordered_set>
#include <algorithm>

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

    int max_len = 0;
    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        unordered_set<int> set;
        int min_val = nums[i], max_val = nums[i];

        for (int j = i; j < n; j++) {
            if (set.find(nums[j]) != set.end()) {
                break;
            }
            set.insert(nums[j]);
            min_val = min(min_val, nums[j]);
            max_val = max(max_val, nums[j]);

            if (max_val - min_val == j - i) {
                if (max_len < j - i + 1) {
                    max_len = j - i + 1;
                    start = i;
                    end = j;
                }
            }
        }
    }

    cout << "Mang dai nhat la: { ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}