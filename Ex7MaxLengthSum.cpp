#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;


int maxLengthSubarraySum(const vector<int>& nums, int target) {
    unordered_map<int, int> sumMap;
    int sum = 0;
    int maxLength = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum == target) {
            maxLength = i + 1;
        }
        if (sumMap.find(sum - target) != sumMap.end()) {
            maxLength = max(maxLength, i - sumMap[sum - target]);
        }
        if (sumMap.find(sum) == sumMap.end()) {
            sumMap[sum] = i;
        }
    }

    return maxLength;
}

int main(){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cout << "Nhap tong can tim: ";
    cin >> target;

    int maxLength = maxLengthSubarraySum(nums, target);
    cout << "Do dai lon nhat cua mang con co tong bang " << target << " la: " << maxLength << endl;

    return 0;
}