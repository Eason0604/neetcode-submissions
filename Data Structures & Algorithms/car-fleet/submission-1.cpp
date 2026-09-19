class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<float,float>> v;
        for(int i=0;i<n;i++){
            v.emplace_back(position[i],(target-position[i])/speed[i]);
        }
        sort(v.begin(),v.end());
        float last_time=-1;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(v[i].second>last_time){
                ans++;
                last_time=v[i].second;
            }
        }
        return ans;
    }
};
