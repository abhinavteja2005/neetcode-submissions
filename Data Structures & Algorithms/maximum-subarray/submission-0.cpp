class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        if(mx <= 0){
            return mx;
        }

        int ans = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(sum + nums[i] < 0){
                sum = 0;
                continue;
            }

            sum = sum + nums[i];
            ans = max(ans, sum);
        }

        return ans;
    }
};
