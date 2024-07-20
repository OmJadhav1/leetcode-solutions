class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans="";
        for(char x: s){
            if(x== '*'){
                if(!st.empty())
                    st.pop();
            }
            else{
                st.push(x);
            }
        }
        while(!st.empty()){
            char x =st.top();
            st.pop();
            ans.push_back(x);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};