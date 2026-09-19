class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.emplace_back(position[i],(target-position[i])/speed[i]+((target-position[i])%speed[i]!=0));
        }
        sort(v.begin(),v.end());
        int last_time=-1,ans=0;
        for(int i=n-1;i>=0;i--){
            if(v[i].second>last_time){
                ans++;
                last_time=v[i].second;
            }
        }
        return ans;
    }
};
