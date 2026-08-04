class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto n:nums){
            if(s.find(n)==s.end()){
                s.insert(n);
            }else{
                return 1;
            }
        }
        return 0;
    }
};