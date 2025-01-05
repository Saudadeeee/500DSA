#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


bool ZeroSum(const vector<int>& nums) {
    unordered_set<int> sumSet;
    int sum = 0;

    for (int num : nums) {
        sum += num;
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
            return true;
        }
        sumSet.insert(sum);
    }
    return false;
}

int main() {
    int n, target;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    if (ZeroSum(nums)) {
        cout << "Mang co cac phan tu bang 0 co ton tai" << endl;
    } else {
        cout << "No subarray with zero-sum exists" << endl;
    }

    return 0;
}
