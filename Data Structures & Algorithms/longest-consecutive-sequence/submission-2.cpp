class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int counter = 1, longest = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) continue;
            else if (nums[i - 1] + 1 == nums[i]) {
                counter++;
                if(counter > longest) longest = counter;
            } else counter = 1;
        }

        return longest;
    }
};