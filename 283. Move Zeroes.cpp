#include <bits/stdc++.h>
using namespace std;
/**
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> a;
        for( int i = 0 ; i < nums.size() ; i ++ ) {
            if ( nums[i] )
                a.push_back( nums[i] );
        }
        for( int i = 0 ; i < a.size() ; i ++ ) {
            nums[i] = a[i];
        }
        for( int i = a.size() ; i < nums.size() ; i ++ ) {
            nums[i] = 0;
        }
    }
};
*/
/**
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for( int i = 0 ; i < nums.size() ; i ++ ) {
            if ( nums[i] )
                nums[k ++]=nums[i];
        }
        for( int i = k ; i < nums.size() ; i ++ ) {
            nums[i] = 0;
        }
    }
};
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for( int i = 0 ; i < nums.size() ; i ++ ) {
            if ( nums[i] )
                if ( i != k )     //考虑到全部是非0元素
                swap(nums[k ++] , nums[i] );
                else
                    k ++;
        }
    }
};

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr)/sizeof(int) );
    Solution().moveZeroes( vec );
    for( int i = 0 ; i < vec.size() - 1 ; i ++ )
        cout << vec[i] << " ";
    cout << vec [ vec.size() - 1 ] << endl;
    return 0;
}
