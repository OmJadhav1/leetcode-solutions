class Solution {
public:
    bool isvowel(int i, string s) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        int size = s.size();
        int i = 0, j = size - 1;

        while (i < j) {
            if (isvowel(i, s) && isvowel(j, s)) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (!isvowel(i, s) && !isvowel(j, s)) {
                i++;
                j--;
            } else if (isvowel(i, s)) {
                j--;
            } else
                i++;
        }
        return s;
    }
};