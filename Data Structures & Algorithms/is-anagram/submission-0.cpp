class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size()!=t.size()){return 0;}
        for(auto c:s){
            m[c]++;
        }
        for(auto c:t){
            m[c]--;
        }
        for(auto p:m){
            if(p.second){
                return 0;
            }
        }
        return 1;
    }
};
