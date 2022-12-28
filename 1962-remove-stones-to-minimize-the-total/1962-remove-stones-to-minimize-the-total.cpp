class Solution
{
    public:
        int minStoneSum(vector<int> &piles, int k)
        {
            int n = piles.size();
            priority_queue<int> pq(piles.begin(), piles.end());
            while (k--)
            {
                if (pq.top() == 1)
                    break;
                int num = pq.top();
                pq.pop();
                num = num - (floor(num / 2));
                pq.push(num);
            }
            vector<int> res;
            while (!pq.empty())
            {
                res.push_back(std::move(const_cast< int &> (pq.top())));
                pq.pop();
            }
            return accumulate(res.begin(), res.end(), 0);
        }
};