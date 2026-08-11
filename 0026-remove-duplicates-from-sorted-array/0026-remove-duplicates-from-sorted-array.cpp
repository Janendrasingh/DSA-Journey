class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                ans.push_back(nums[i]);
            }
        }
        if (n > 0) {
            ans.push_back(nums[n - 1]);
        }

        int m = ans.size();

        for (int i = 0; i < m; i++) {
            nums[i] = ans[i];
        }

        return m;
    }
};