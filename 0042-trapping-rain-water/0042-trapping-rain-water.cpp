class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
       vector<int>pre(n,0);
        vector<int>suf(n,0);
        
        
       // pre.push_back(height[0]);
        for(int i = 1;i<height.size();i++){
            
           // int x = height[i];
            pre[i] = max(height[i-1],pre[i-1]);
        }
        //suf.push_front(height[n-1]);
        for(int i = n-2;i>=0;i--){
            
           // int x = height[i];
            suf[i] = max(height[i+1],suf[i+1]);
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            cnt += max(0,(min(pre[i],suf[i])) - height[i]);
        }return cnt;
    }
};