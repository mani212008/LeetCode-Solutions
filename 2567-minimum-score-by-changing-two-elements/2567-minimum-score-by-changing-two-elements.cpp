class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if (n<= 3) return 0;

        sort(nums.begin(), nums.end());

        int option1 = nums[n - 3] - nums[0];
        int option2 = nums[n - 1] - nums[2];
        int option3 = nums[n - 2] - nums[1];

        return min({option1, option2, option3});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna