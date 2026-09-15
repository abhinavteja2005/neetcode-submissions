class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2) return false;
        stack<char> st;
        map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        for(auto c: s){
            if(c == '[' || c == '{' || c == '('){
                st.push(c);
            }else{
                if(st.empty()){
                    return false;
                }
                if(st.top() != mp[c]){
                    return false;
                }else st.pop();
            }
        }

        if(st.empty()){
            return true;
        }else return false;
    }
};
