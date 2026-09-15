class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // look up every window of size s1 and see if we can find it
        if(s1.size() > s2.size()){
            return false;
        }
        int n1 = s1.size();
        int n2 = s2.size();

        
        sort(s1.begin(), s1.end());

        for(int i = 0; i < n2 - n1 + 1; i++){
            
            string t = s2.substr(i, s1.size());
            sort(t.begin(), t.end());
            if(s1 == t) return true;
        }
        return false;
    }
};
