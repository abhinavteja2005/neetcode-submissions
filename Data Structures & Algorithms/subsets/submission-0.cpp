class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int twopowern = (int)(pow(2, n));
        vector<vector<int>> ans;
        for(int i = 0; i < twopowern; i++){
            // now for every i.. add the elements that are present only in its jth bit from the left
            vector<int> small;
            for(int j = 0; j < 32; j++){
                if((i >> j) & 1){
                    if(j < n){
                        small.push_back(nums[j]);
                    }
                }
            }
            ans.push_back(small);
        }
        return ans;
    }
};
