class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> m;
        
        for(int x: nums)
            m[x]++;
        int max=0;
        for(auto x: m){
            if(x.second > max)
                max= x.second;
        }
        map<int, int>::iterator itr;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=max;i>0;i--){
            for(itr = m.begin(); itr != m.end(); ++itr){
                if(itr->second == i){
                    temp.push_back(itr->first);
                    itr->second--;
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};