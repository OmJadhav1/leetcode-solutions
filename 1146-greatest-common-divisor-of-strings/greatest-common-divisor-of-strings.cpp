class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return str1+str2 == str2+str1 ? str1.substr(0, gcd(size(str1), size(str2))) : "";

        //logic
        //we they have gcd string then by adding them they must be equal
        //and gcd string will be gcd of both strings size
    }
};