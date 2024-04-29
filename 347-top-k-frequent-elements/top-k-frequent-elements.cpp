class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int x: nums)
            m[x]++;

        vector<pair<int,int>> vec(m.begin(),m.end());

        sort(vec.begin(),vec.end(), []( pair<int,int>a, pair<int,int> b){
            return a.second>b.second;
        });

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};