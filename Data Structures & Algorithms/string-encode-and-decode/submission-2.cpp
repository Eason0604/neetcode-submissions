class Solution {
public:
    string encode(vector<string>& strs) {
        string ans="";
        for(auto s:strs){
            ans+=to_string(s.size())+'x'+s;
        }
        return ans;
    }
    vector<string> decode(string s) {
        vector<string> ans;
        int len,init;
        for(int i=0;i<s.size();i++){
            init=i;
            while(s[i]!='x'){
                i++;
            }
            len=stoi(s.substr(init,i-init));
            ans.push_back(s.substr(i+1,len));
            i+=len;
        } 
        return ans;
    }
};
