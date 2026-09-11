class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(auto x: nums){
            mp[x]++;
        } 

        vector<pair<int, int>> v;
        for(auto [x, y]: mp){
            v.push_back({y, x});
        }

        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
