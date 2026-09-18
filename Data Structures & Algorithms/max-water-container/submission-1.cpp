class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0,n=heights.size();
        int left=0,right=n-1;
        while(left<right){
            ans=max( ans,(right-left)*min(heights[left],heights[right]) );
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
