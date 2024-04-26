class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //this is solved by bit manipulation
        //when we xor two same number they cancel each other
        //by using this
        //we will xor each ele in vector
        //then we will xor that ans with whole sequence
        //such that all ele which gets double xor gets cancelled
        //and only left out ele remain
        //which is our ans
        int n=nums.size();
        int ans=nums[0];
        for(int i=1;i<n;i++){
            ans = ans ^ nums[i];
        }

        for(int i=0;i<=n;i++){
            ans = ans^ i ;
        }

        return ans;

    }
};