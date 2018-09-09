#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        if (nums.size() == 0) return 0;
        nums[k ++] = nums[0];
        for( int i = 1 ; i < nums.size(); i ++ )
            if( !(nums[i] == nums[i - 1] && nums[i] == nums[i + 1]))
                nums[k ++] = nums[i] ;
        return k ;
    }
};

int main()
{
    int arr[] = {0,0,0,0};
    vector<int> vec(arr, arr + sizeof(arr)/sizeof(int) );
    cout << Solution().removeDuplicates( vec ) << endl;
    for( int i = 0 ; i < vec.size() - 1 ; i ++ )
        cout << vec[i] << " ";
    cout << vec [ vec.size() - 1 ] << endl;
    return 0;
}



