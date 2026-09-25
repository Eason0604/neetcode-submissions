class Solution {
public:
    vector<vector<int>> res;
    void func(vector<int>& nums, int& target,vector<int>& subarr,int sum,int index){
        if(sum>target){
            return;
        }else if(sum==target){
            res.push_back(subarr);
            return;
        }
        for(int i=index;i<nums.size();i++){
            subarr.push_back(nums[i]);
            func(nums,target,subarr,sum+nums[i],i);
            subarr.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subarr;
        func(nums,target,subarr,0,0);
        return res;
    }
};
