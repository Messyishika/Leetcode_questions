class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxA = 0;
        int n = heights.size();
        for(int i =0;i<=n;i++){
            while(!st.empty()&&(i == n || heights[st.top()] >= heights[i])){
                int h = heights[st.top()];
                st.pop();
                int w;
                if(st.empty())w = i;
                else w= i - st.top() -1;
                maxA = max(maxA,w*h);
            }
            st.push(i);
        }
        return maxA;
        
    }
};