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
        string temp;
        int len;
        for(int i=0;i<s.size();i++){
            temp="";
            while(s[i]!='x'){
                temp+=s[i];
                i++;
            }
            len=stoi(temp);
            temp="";
            while(len){
                i++;
                temp+=s[i];
                len--;
            }
            ans.push_back(temp);
        } 
        return ans;
    }
};
