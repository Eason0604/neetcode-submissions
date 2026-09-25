class Solution {
public:
    vector<vector<int>> res;
    void func(vector<int>& nums, int& target,vector<int>& subarr,int& sum,int index){
        if(sum>target){
            return;
        }else if(sum==target){
            res.push_back(subarr);
            return;
        }
        for(int i=index;i<nums.size();i++){
            subarr.push_back(nums[i]);
            sum+=nums[i];
            func(nums,target,subarr,sum,i);
            subarr.pop_back();
            sum-=nums[i];
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subarr;
        int sum=0;
        func(nums,target,subarr,sum,0);
        return res;
    }
};
