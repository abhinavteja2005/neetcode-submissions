class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt0 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) cnt0++;
        }

        vector<int> ans;

        if(cnt0 >= 2){
            // all are 0s
            ans.resize(nums.size(), 0);
        }else if(cnt0 == 1){
            // one zero only.. skip that and compute the product
            ans.resize(nums.size(), 0);
            int pdt = 1;
            for(auto x: nums){
                if(x != 0){
                    pdt *= x;
                }
            }

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    ans[i] = pdt;
                }
            }

        }else{
            long long pdt = 1LL;
            for(auto x: nums){
                pdt = pdt*((long long)x);
            }

            
            for(auto x: nums){
                ans.push_back(pdt/x);
            }
        }
        return ans;
    }
};
