

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int count = 0;

        for (int x : nums) {
            int complement = k - x;
            if (m[complement] > 0) {
                // If the complement exists in the map, use it to form a pair
                count++;
                m[complement]--;
                if (m[complement] == 0) {
                    m.erase(complement);
                }
            } else {
                // Otherwise, add the current number to the map
                m[x]++;
            }
        }

        return count;
    }
};
