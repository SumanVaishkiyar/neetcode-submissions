class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string merge="";
        int m=word1.size();
        int n=word2.size();
        
        while(i<m && j<n){
            
            merge += word1[i];
            merge +=word2[j];
            i++;
            j++;
        }
        while(i<m){
                merge += word1[i];
                i++;
        }
        while(j<n){
                merge += word2[j];
                j++;
            }
        return merge;
    }    
};