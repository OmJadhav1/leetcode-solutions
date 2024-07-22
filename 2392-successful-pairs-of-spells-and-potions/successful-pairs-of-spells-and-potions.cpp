class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> sol(spells.size(), 0);
        int n = potions.size();

        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); ++i) {
            int l = 0;
            int r = n - 1;
            while (l <= r) {
                auto mid = l + (r - l) / 2;

                const long long cand =(long long)spells[i] * (long long)potions[mid];
                if (cand < success) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            //derived
            sol[i] = n - r - 1;
        }

        return sol;
    }
};