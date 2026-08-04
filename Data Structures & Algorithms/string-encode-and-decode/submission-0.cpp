class Solution {
public:
    int f(string str){
        int sum=0;
        for(auto c:str){
            sum*=10;
            sum+=c-'0';
        }
        return sum;
    }
    string encode(vector<string>& strs) {
        string ans="";
        for(auto s:strs){
            ans+=to_string(s.size());
            ans+='x';
            ans+=s;
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
            len=f(temp);
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
