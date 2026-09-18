class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();
        bool flag1 = false, flag2 = false, flag3 = false;

        // check a   
        for(int i = 0; i < n; i++){
            if(triplets[i][0] == target[0] && triplets[i][1] <= target[1] && triplets[i][2] <= target[2]){
                flag1 = true;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(triplets[i][0] <= target[0] && triplets[i][1] == target[1] && triplets[i][2] <= target[2]){
                flag2 = true;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(triplets[i][0] <= target[0] && triplets[i][1] <= target[1] && triplets[i][2] == target[2]){
                flag3 = true;
                break;
            }
        }

        return flag1 && flag2 && flag3;
    }
};
