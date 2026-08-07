class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int right=n-1;
        for(auto& c:s){
            if(c>='A'&&c<='Z'){
                c=c-('A'-'a');
            }else if(c>'z'||c<'a'){
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
