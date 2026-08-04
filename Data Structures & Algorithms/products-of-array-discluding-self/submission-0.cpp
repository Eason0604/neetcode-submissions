class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre[n-1],count=1,temp;
        pre[0]=nums[0];
        for(int i=1;i<n-1;i++){
            pre[i]=pre[i-1]*nums[i];
        }
        for(int i=n-1;i>0;i--){
            temp=nums[i];
            nums[i]=pre[i-1]*count;
            count*=temp;
        }
        nums[0]=count;
        return nums;
    }
};
