class Solution {
public:
    int sumOfSquares(int n){
        string s = to_string(n);
        int sum = 0;
        for(auto c: s){
            sum += (c - '0')*(c - '0');
        }

        return sum;
    }
    bool isHappy(int n) {
        map<int, int> mp;
        while(1){
            int sum = sumOfSquares(n);
            if(sum == 1){
                return true;
            }

            if(mp[sum] > 0){
                return false;
            }

            mp[sum]++;
            n = sum;
        }
    }
};
