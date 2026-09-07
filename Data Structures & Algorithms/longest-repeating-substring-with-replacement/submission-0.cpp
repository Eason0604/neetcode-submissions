class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,n=s.size(),ans=-1;
        vector<int> freq(26,0);
        for(int right=0;right<n;right++){
            freq[s[right]-'A']++;
            int max_num=0;
            char max_c;
            for(int i=0;i<26;i++){
                if(max_num<freq[i]){
                    max_num=freq[i];
                    max_c=i;
                }
            }
            int others=right-left+1-freq[max_c];
            while(others>k){
                freq[s[left++]-'A']--;
                max_num=0;
                for(int i=0;i<26;i++){
                    if(max_num<freq[i]){
                        max_num=freq[i];
                        max_c=i;
                    }
                }
                others=right-left+1-freq[max_c];
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
