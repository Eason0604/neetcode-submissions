class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.size()-1;
        for(auto& c:s){
            if(c>='A'&&c<='Z'){
                c=c-('A'-'a');
            }else if((c>'z'||c<'a')&&(c>'9'||c<'0')){
                c=' ';
            }
        }
        while(s[right]==' '){
            right--;
        }
        for(int i=0;i<right;i++){
            if(s[i]==' '){continue;}
            if(s[i]==s[right]){
                right--;
                while(s[right]==' '){
                    right--;
                }
            }else{
                return false;
            }
        }
        return true;
    }
};
