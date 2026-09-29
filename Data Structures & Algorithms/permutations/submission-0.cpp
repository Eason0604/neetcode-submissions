class Solution {
public:
    vector<vector<int>> res;
    void f(vector<int>& nums,vector<int>& arr, unordered_set<int>& s){
        if(arr.size()==nums.size()){
            res.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i])){
                arr.push_back(nums[i]);
                s.insert(nums[i]);
                f(nums,arr,s);
                s.erase(nums[i]);
                arr.pop_back();
            }
        }  
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> arr;
        unordered_set<int> s;
        f(nums,arr,s);
        return res;
    }
};
