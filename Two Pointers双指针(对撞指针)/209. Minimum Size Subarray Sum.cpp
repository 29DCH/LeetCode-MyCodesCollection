class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l=0,r=-1;
        int sum=0;
        int res=nums.size()+1;
        while(l<nums.size())
        {
            if(r+1<nums.size()&&sum<s)
                sum+=nums[++r];
            else
                sum-=nums[l++];
            if(sum>=s)
                res=min(res,r-l+1);
        }
        if(res==nums.size()+1)
            return 0;
        return res;
    }
};

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int res = INT_MAX, left = 0, sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            while (left <= i && sum >= s) {
                res = min(res, i - left + 1);
                sum -= nums[left++];
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};


class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int res = INT_MAX, n = nums.size();
        vector<int> sums(n + 1, 0);
        for (int i = 1; i < n + 1; ++i) sums[i] = sums[i - 1] + nums[i - 1];
        for (int i = 0; i < n; ++i) {
            int left = i + 1, right = n, t = sums[i] + s;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (sums[mid] < t) left = mid + 1;
                else right = mid - 1;
            }
            if (left == n + 1) break;
            res = min(res, left - i);
        }
        return res == INT_MAX ? 0 : res;
    }
};