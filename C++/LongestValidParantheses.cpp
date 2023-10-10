class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        if(s[i] == ')')
        {
            if(st.empty()==0)
            {
                int j = st.top();
                st.pop();
                s[i] = '_';
                s[j] = '_';
            }
        }
        if(s[i] == '(')
        {
            st.push(i);
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '_')
        {
            int ct=1;
            i++;
            while(s[i] == '_')
            {
                ct++;
                i++;
            }
            i--;
            ans = max(ans,ct);
        }
    }
    return ans;
    }
};