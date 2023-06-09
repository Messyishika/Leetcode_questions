class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       stack<int>st;
        //unordered_map<int,int>mp;
         int n = nums.size();
        vector<int>ans(n,-1);
       
        
        for(int i = 2*n-1;i>=0;--i){
            
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i%n<n){
                if(!st.empty()){
                    ans[i%n] = st.top();
                }
            }
                st.push(nums[i%n]);
        }
       
        return ans;
    }
};