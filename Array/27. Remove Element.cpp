#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int removeElement(vector<int>& nums, int val) {
        int k=0;
        for( int i = 0 ; i < nums.size() ; i ++ ) {
            if ( nums[i] != val)
                nums[k ++] = nums[i];
        }
        return k;
    }
};

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr)/sizeof(int) );
    cout << Solution().removeElement( vec , 0 ) << endl;
    return 0;
}

