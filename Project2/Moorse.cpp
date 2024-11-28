#include <iostream>
#include <vector>
using namespace std;

vector<int> findPairWithTargetSum(const vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int pairSum = 0;
  /*  for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;*/ // Empty vector if no pair is found
        
    int i = 0;
    int j = n - 1;
    while (i < j) {
        pairSum = nums[i] + nums[j];
        if (pairSum > target) {
            j--;
        }
        else if (pairSum < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;

}

int MoorsAlgo(vector<int>& nums) {
    int n = nums.size();


    for (int val: nums) {
             int frequency = 0;
            for (int el : nums) {
                  if (el == val) {
                    frequency++;
                  }
            }
            if (frequency > n / 2) {
                return val;
            }
    }
}



int main() {
    vector<int> num = { 2, 3, 4, 5, 6 };
    int target = 9;
        
    vector<int> nums = { 1,2,1,1,2,2,2 };

    int result = MoorsAlgo(nums);

    cout << result << endl;

    vector<int> ans = findPairWithTargetSum(num, target);

    if (!ans.empty()) {
     
        cout << ans[0] << ", " << ans[1] << endl;
    }
    else {
        cout << "No pair found with the given target sum." << endl;
    }

    return 0;
}
