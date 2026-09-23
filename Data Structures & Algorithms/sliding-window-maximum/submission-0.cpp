class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // let us maintain a priority queue and track left element
        int n = nums.size();
        int l = 0;

        multiset<int> s;
        for(int i = 0; i < k; i++){
            s.insert(nums[i]);
        }

        vector<int> ans; 
        int mx = *s.rbegin();
        ans.push_back(mx); 
        s.erase(s.find(nums[0])); 

        for(int l = 1; l < n - k + 1; l++){
            s.insert(nums[l + k - 1]);
            mx = *s.rbegin();
            ans.push_back(mx);
            s.erase(s.find(nums[l]));
        }

        return ans;
    }
};
