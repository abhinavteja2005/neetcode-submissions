class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize) return false;

        map<int, int> freq;
        for (int x : hand) freq[x]++;

        while (!freq.empty()) {
            int start = freq.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                auto it = freq.find(start + i);
                if (it == freq.end()) return false;
                if (--it->second == 0) freq.erase(it);
            }
        }

        return true;
    }
};