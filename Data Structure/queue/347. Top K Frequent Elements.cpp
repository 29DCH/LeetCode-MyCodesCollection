class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(unordered_map<int,int>::iterator iter = freq.begin(); iter!=freq.end(); iter++)
        {
            if(pq.size()==k)
            {
                if(iter->second>pq.top().first)
                {
                    pq.pop();
                    pq.push(make_pair(iter->second,iter->first));
                }
            }
            else
                pq.push(make_pair(iter->second,iter->first));
        }
        vector<int> res;
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};