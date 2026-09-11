class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        map<int, int> mp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i] - 1) != 0){
                mp[nums[i]] = mp[nums[i] - 1] + 1;
            }else{
                mp[nums[i]] = 1;
            }
        }

        int ans = 1;
        for(auto [x, y]: mp){
            if(y > ans){
                ans = y;
            }
        }

        return ans;
    }
};
