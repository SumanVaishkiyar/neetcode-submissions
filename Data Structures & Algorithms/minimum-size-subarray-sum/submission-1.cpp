class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int sum=0;
        int n=nums.size();
        int res=INT_MAX;

        while(high<n){
            sum=sum+nums[high];

            while(sum>=target){
                res=min(res,high-low+1);
                low++;
                sum=sum-nums[low-1];  
            }
            high++;
        }
        if(res== INT_MAX) return 0;
        return res;
        
    }
};