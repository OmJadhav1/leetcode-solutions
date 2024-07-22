class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n);

        // Sort potions to enable binary search
        sort(potions.begin(), potions.end());

        // Iterate over each spell
        for (int i = 0; i < n; i++) {
            long long minPotion = (success + spells[i] - 1) / spells[i]; // Ceiling of success/spells[i]

            // Binary search to find the first potion that is >= minPotion
            auto it = lower_bound(potions.begin(), potions.end(), minPotion);

            // Calculate the number of potions that meet the criteria
            ans[i] = potions.end() - it;
        }
        return ans;
    }
};
