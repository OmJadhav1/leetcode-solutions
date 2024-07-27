class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = n;
        if (n == 0)
            return true;
        if (size == 1 && flowerbed[0] == 0)
            return true;
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 1) {
                continue;
            }
            if (i == 0) {
                if (flowerbed[i + 1] != 1) {
                    count--;
                    flowerbed[i] = 1;
                }
            } else if (i == size - 1) {
                if ( flowerbed[i - 1] != 1) {
                    count--;
                    flowerbed[i] = 1;
                }
            } else if (flowerbed[i + 1] != 1 && flowerbed[i - 1] != 1) {
                count--;
                flowerbed[i] = 1;
            }

            if (count == 0)
                return true;
        }
        if (count == 0)
            return true;
        return false;
    }
};