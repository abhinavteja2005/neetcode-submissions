class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> mp(26, 0);
        int l = 0, max_freq = 0, ans = 0;

        for (int r = 0; r < n; r++) {
            mp[s[r] - 'A']++;
            max_freq = max(max_freq, mp[s[r] - 'A']);

            if ((r - l + 1) - max_freq > k) {
                mp[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};