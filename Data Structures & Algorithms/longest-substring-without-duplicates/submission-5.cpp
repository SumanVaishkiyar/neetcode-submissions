class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;

        int high=0;
        int low=0;
        int ans=0;
        int n=s.size();

        while(high<n){
           
            map[s[high]]++;
            
        
            while(map[s[high]]>1){
                map[s[low]]--;
                low++;
            }
            ans=max(ans,high-low+1);
            high++;
        }    
        return ans;
    }
};
