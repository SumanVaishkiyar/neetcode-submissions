class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int officer=0;
        int cm=1;
        res.push_back(nums[0]);

        while(cm<n){
            if(nums[officer]==nums[cm]){
                cm++;
                continue;
            }
            else{
                nums[officer+1]=nums[cm];
                res.push_back(nums[cm]);
                officer++;
                cm++;
            }
           
        }
        return officer +1;
    }

};