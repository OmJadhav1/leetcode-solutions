class Solution
{
    public:
        //every time writing comparator write static
        //and return type simply give auto or specifically bool
        static auto comp( pair<int, int> &a,  pair<int, int> &b)
        {
            if(a.second==b.second)
                return a.first>b.first;
            return a.second < b.second;
        }
    vector<int> frequencySort(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        //this line will do same work as commented code 
        //of adding all pairs in map into vector
        vector<pair<int, int>> combo(m.begin(),m.end());
        // for (auto x: m)
        // {
        //     combo.push_back(pair(x.first, x.second));
        // }
        sort(combo.begin(), combo.end(), comp);

        for(auto x:combo){
            while(x.second){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};