class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //brute force
        int n1= nums1.size();
        int n2= nums2.size();
        vector<int> ans(n1,-1);
        for(int i=0; i<n1;i++){
            int find=-1;
            for(int j=0;j<n2;j++){
                if(nums1[i] == nums2[j]){
                    find=j;
                    break;
                }
            }
            for(int j=find;j<n2;j++){
                if(nums2[j]> nums1[i]){
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};