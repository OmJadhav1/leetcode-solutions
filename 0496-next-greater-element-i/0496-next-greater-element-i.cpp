class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans(n1,-1);
        stack<int> s;
        unordered_map<int,int> m;
        
        for(int i=0;i<n2;i++){
            while(!s.empty() && s.top()<nums2[i]){
                m[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        
        for(int i=0;i<n1;i++){
            if(m[nums1[i]]){
                ans[i] = m[nums1[i]];
            }
        }
        return ans;
    }
};