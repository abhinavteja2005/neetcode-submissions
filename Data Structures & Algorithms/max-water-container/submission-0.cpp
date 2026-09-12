class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int l = 0;
        int r = n - 1;

        int curr = min(h[0], h[n - 1]) * (n - 1);
        int ans = curr;
        while(l < r){
            curr = min(h[l], h[r])*(r - l);
            ans = max(curr, ans);
            if(h[l] < h[r]){
                l++;
            }else {
                r--;
            }
        }

        return ans;
    }
};