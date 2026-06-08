class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        vector<vector<int>>res;
        sort(num.begin(),num.end());
        int n=num.size();

        for(int i=0;i<n-3;i++){
            if(i>0 && num[i]==num[i-1]) continue;

            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && num[j]==num[j-1]) continue;
                int k=j+1;
                int l=n-1;

                while(k<l){
                    long long s=(long long)num[i]+num[j]+num[k]+num[l];
                    if(s==target){
                        res.push_back({num[i],num[j],num[k],num[l]});
                        k++;
                        l--;

                        while(k<l && num[k]==num[k-1]) k++;
                        while(k<l && num[l]==num[l-1]) l--;
                    }
                    else if(s<target) k++;
                    else l--;
                }
            }
        }
        return res;
    }
};