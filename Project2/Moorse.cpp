#include <iostream>
#include <vector>
using namespace std;

vector<int> findPairWithTargetSum(const vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans; // Empty vector if no pair is found
}

int main() {
    vector<int> nums = { 2, 3, 4, 5, 6 };
    int target = 9;

    vector<int> ans = findPairWithTargetSum(nums, target);

    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    }
    else {
        cout << "No pair found with the given target sum." << endl;
    }

    return 0;
}
