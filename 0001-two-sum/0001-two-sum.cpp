class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> umap;
        vector<int> ans(2,-1);
        for(int i=0;i<n;i++){
            int secnum= target-nums[i];
            if(umap.find(secnum) != umap.end()){
                ans[0] =i;
                auto secpointer= umap.find(secnum);
                ans[1]=secpointer->second;
            }else{
                umap[nums[i]] = i;
            }
        }
        return ans;
    }
};