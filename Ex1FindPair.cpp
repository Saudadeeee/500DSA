#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Sử dụng bảng băm để tìm cặp số có tổng bằng target
pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }

    return {-1, -1}; // Không tìm thấy cặp số
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

    cout << "Nhap gia tri can: ";
    cin >> target;

    auto result = findPair(nums, target);
    if (result.first != -1) {
        cout << "Cap so tim thay (" << result.first << ", " << result.second << ")\n";
    } else {
        cout << "Khong tim thay\n";
    }

    return 0;
}
