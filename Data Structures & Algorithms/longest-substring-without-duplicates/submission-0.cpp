class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> det;
        int left=0,ans=0;
        for(int right=0;right<s.size();right++){
            det[s[right]]++;
            while(det[s[right]]>1){
                det[s[left++]]--;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
