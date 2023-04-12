class Solution {
public:
    bool isValid(string s) {
       stack<char> s1;
        int len = s.length();
        for(int i = 0;i<len;i++)
        {
            if(s[i] == '('|| s[i] == '{' || s[i] == '[') 
                s1.push(s[i]);
            else if(s[i] == ')'|| s[i] == '}' || s[i] == ']') {
                if(s1.empty()) return false;
                if(s[i] == ')' && s1.top()!='(')
                    return false;
                if(s[i] == '}' && s1.top()!='{')
                     return false;
                if(s[i] == ']' && s1.top()!='[')
                     return false;
                s1.pop();}
         }
        if( s1.empty())
            return true;
        else
            return false;
     }
};