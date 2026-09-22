class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size(),last=100001;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==last){
                continue;
            }
            last=nums[i];
            int left=i+1,right=n-1,target=-nums[i],last_temp=INT_MAX;
            while(left<right){
                if(nums[left]+nums[right]>target){
                    right--;
                }else if(nums[left]+nums[right]<target){
                    left++;
                }else{
                    if(nums[left]!=last_temp){
                        ans.push_back({nums[i],nums[left],nums[right]});
                        last_temp=nums[left];
                    }
                    right--;
                }
            }
        }
        return ans;
    }
};
