class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount+1,-1);
        dp[amount]=0;
        int step=amount;
        while(step){
            if(dp[step]==-1){
                step--;
                continue;
            }
            for(auto c:coins){
                if(step-c<0){continue;}
                if(dp[step-c]==-1||dp[step-c]>dp[step]+1){
                    dp[step-c]=dp[step]+1;
                }
            }
            step--;
        }
        return dp[0];
    }
};
