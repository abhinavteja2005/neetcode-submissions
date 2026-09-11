class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string s = "";
        for(auto x: strs){
            if(x.size() < 10)
                s = s +"00"+ to_string(x.size()) + x;
            else if(x.size() < 100){
                s = s + "0" + to_string(x.size()) + x;
            }else{
                s = s + to_string(x.size()) + x;
            }
        }
        return s;
    }

    vector<string> decode(string s) {
        if(s.size() == 0){
            return {};
        }
        int count = 0;
        vector<string> ans;
        string x = "";
        bool start = true;
        for(int i = 0; i < s.size(); i++){
            if(count == 0){
                if(!start) {
                    ans.push_back(x);
                    x = "";
                }
                start = false;
                count = stoi(std::string() + s[i] + s[i + 1] + s[i + 2]);
                i += 2; // skip over the length prefix (2 more, since i++ happens in the loop)
            } else {
                x += s[i];
                count--;
            }
        }
        // push the last string
        ans.push_back(x);
        return ans;
    }

};
