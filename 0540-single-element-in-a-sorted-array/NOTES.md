in this Q if mid is at odd index and the right side of number is not equal to mid then single element must be at right side 
for that we will shift left side pointer
but when mid is even we will make it odd by -- and check line 1 condition again 
if it is true means single element is in left side
so we will shift right side pointer
this loop will break when left and right pointer pointing towards same number i.e. left==right
then break loop and return left/right​
