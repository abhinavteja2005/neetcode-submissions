class Solution {
public:
    int trap(vector<int>& height) {
        // keep two pointers.. l is small and r is large.. once we reach a new large it will become new l and we need to add the sum we got.. we wont add the sum if we dont have a large one
        
        int n = height.size();
        int l = 0, r = n - 1;
        int totalSum = 0;
        int leftMax = height[l];
        int rightMax = height[r];
        while(l < r){
            if(leftMax > rightMax){
                r--;
                rightMax = max(rightMax, height[r]);
                totalSum += rightMax - height[r];
            }else{
                l++;
                leftMax = max(leftMax, height[l]);
                totalSum += leftMax - height[l];
            }
        }

        return totalSum;
    }
};
