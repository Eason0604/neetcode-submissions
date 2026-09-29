class Solution {
public:
    vector<vector<int>> res;
    void f(vector<int>& nums,int index){
        if(index==nums.size()-1){
            res.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            f(nums,index+1);
            swap(nums[i],nums[index]);
        }  
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        f(nums,0);
        return res;
    }
};
