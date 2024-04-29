class Solution {
public:
    static auto comp(pair<int,int>a, pair<int,int> b){
        return a.second>=b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<pair<int,int>> vec;
        vector<int> ans;
        for(int x: nums)
            m[x]++;

        for(auto x: m){
            vec.push_back({x.first,x.second});
        }

        sort(vec.begin(),vec.end(), comp);

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};