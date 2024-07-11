class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int> m;
        int r=0,l=0;
        int ans=0;
        while(l<n){
            m[fruits[l]]++;

            if(m.size() <=2){
                ans= max(ans, (l-r+1));
            }else if(m.size() >2){
                while(m.size()>2){
                    m[fruits[r]]--;
                    if(m[fruits[r]] == 0)
                        m.erase(fruits[r]);
                    r++;
                }
            }
            l++;
        }
        return ans;
    }
};