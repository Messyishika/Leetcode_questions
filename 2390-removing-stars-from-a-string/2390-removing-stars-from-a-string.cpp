class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(char c : s){
            
            if(c == '*' && !st.empty()){
                st.pop();
            }
            else
                st.push(c);
        }
        
        string ans;
        while(!st.empty()){
            char a = st.top();
            ans += a;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};