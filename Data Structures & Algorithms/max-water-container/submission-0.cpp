class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0,n=heights.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,(j-i)*min(heights[i],heights[j]));
            }
        }
        return ans;
    }
};
