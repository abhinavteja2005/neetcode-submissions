class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1);
        int l = 0, cnt = 0;

        for (int r = 0; r < (int)s.size(); r++) {
            if (mp[s[r]] >= l) {       // duplicate is inside current window
                l = mp[s[r]] + 1;
            }
            mp[s[r]] = r;
            cnt = max(cnt, r - l + 1);
        }

        return cnt;
    }
};