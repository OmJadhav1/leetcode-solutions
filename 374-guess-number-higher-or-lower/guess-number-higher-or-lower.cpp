/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l,r;
        l=1;
        r=n;
        long long mid = (l+r)/2;
        while(l<r){
            int pred = guess(mid);
            if(pred == 0){
                return mid;
            }
            if(pred == -1){
                r=mid;
            }
            if(pred==1){
                l=mid+1;
            }
            mid= (l+r)/2;
        }
        return l;
    }

};