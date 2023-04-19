class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0;
        int ans;
        for(int i = 0;i<gain.size();i++){
            high = gain[i]+high;
            gain[i] = high;
        }
        ans = *max_element(gain.begin(),gain.end());
        
        if(ans<0)
            return 0;
        else
            return ans;
    }
};