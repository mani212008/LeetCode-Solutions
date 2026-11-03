class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_element = -1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > max_element){
                max_element = nums[i];
            }
        }
        int sum = 0;
        for ( int i = 0; i < nums.size(); i++){ 
            sum+= max_element - nums[i];  
        }
        return sum;     
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna