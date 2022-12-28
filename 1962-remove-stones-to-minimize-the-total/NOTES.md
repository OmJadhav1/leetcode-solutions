here we dont have to push elements of pq in vector and then find sum
we can do it directly
by
int sum=0;
while(!pq.empty()) //count total number of stones
{
sum += pq.top(); pq.pop();
}
return sum;