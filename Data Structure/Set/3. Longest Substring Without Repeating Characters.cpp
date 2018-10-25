class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> t;
        int res = 0, left = 0, right = 0;
        while (right < s.size()) {
            if (t.find(s[right]) == t.end()) {
                t.insert(s[right++]);
                res = max(res, (int)t.size());
            }  else {
                t.erase(s[left++]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256, -1);
        int res = 0, left = -1;
        for (int i = 0; i < s.size(); ++i) {
            left = max(left, m[s[i]]);
            m[s[i]] = i;
            res = max(res, i - left);
        }
        return res;
    }
};