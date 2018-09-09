public class Solution
{
    public int MaxArea(int[] h)
    {
        int l = 0, r = h.Length - 1;
        int maxArea = 0;
        while (l < r && l >= 0 && r <= h.Length - 1)
        {
            maxArea = Math.Max(maxArea, Math.Min(h[l], h[r]) * (r - l));
            if (h[l] > h[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return maxArea;
    }
}


class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size() - 1;
        int maxArea = 0;
        while (l < r && l >= 0 && r <= h.size() - 1)
        {
            maxArea = max(maxArea,min(h[l],h[r])*(r-l));
            if (h[l] > h[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return maxArea;
    }
};