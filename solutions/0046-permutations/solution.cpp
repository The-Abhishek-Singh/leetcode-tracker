class Solution {
private:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& ans) {
        // Base condition: jab index array ke end tak pahunch jaye
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            // Choice: element swap karo
            swap(nums[index], nums[i]);

            // Recurse for the next position
            backtrack(index + 1, nums, ans);

            // Backtrack: state restore karo
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtrack(0, nums, ans);
        return ans;
    }
};
