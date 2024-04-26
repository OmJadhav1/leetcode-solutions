class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n = s.size();
        unordered_map<char,int> m{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
        };      
        //go from back to front 
        //this is easy approach
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                //last ele
                ans += m[s[i]];
            }else{
                //other than last 
                if(m[s[i]] >= m[s[i+1]]){
                    //if curr if big
                    ans += m[s[i]];
                }else{
                    //if curr is small
                    ans -= m[s[i]];
                }
            }
        }
        return ans;
    }
};