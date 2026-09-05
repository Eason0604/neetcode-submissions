class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int right=0;
        unordered_map<char,int> m;
        unordered_set<char> s,det;
        for(auto& c:s1){
            m[c]++;
            s.insert(c);
        }
        for(int left=0;left<s2.size();left++){
            if(left&&s.count(s2[left-1])){
                m[s2[left-1]]++;
                if(m[s2[left-1]]==1){
                    det.erase(s2[left-1]);
                }
            }
            while(right<s2.size()){
                if(s.count(s2[right])){
                    m[s2[right]]--;
                    if(m[s2[right]]==0){
                        det.insert(s2[right]);
                    }
                }
                if(det.size()==s.size()){
                    if(right-left+1==s1.size()){
                        return true;
                    }
                    break;
                }
                right++;
            }
        }
        return false;
    }
};
