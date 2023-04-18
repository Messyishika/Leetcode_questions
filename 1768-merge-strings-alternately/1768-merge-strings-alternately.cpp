class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string ans;
        int i = 0,j = 0;
        while( n>i && m>j ){
           ans += word1[i++];
            ans += word2[j++];
        }
        
        
            ans += word1.substr(i);
       
            ans += word2.substr(j);
        return ans;
    }
};