class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2); // Initialize with two empty vectors
        set<int> s1, s2;

        for (int x : nums1)
            s1.insert(x);
        for (int x : nums2)
            s2.insert(x);

        for (int x: s1) {
            if(s2.find(x) != s2.end()) {
                continue;
            }else{
                 ans[0].push_back(x);
            }
        }
        for (int x: s2) {
            if(s1.find(x) != s1.end()) {
                continue;
            }else{
                 ans[1].push_back(x);
            }
        }
        return ans;
    }
};