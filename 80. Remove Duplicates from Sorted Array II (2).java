public class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        for (int num : nums) {
            if (i < 2 || num > nums[i - 2]) {
                nums[i++] = num;
            }
        }
        return i;
    }
}


public class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums == null || nums.length == 0) return 0;
        int limit = 2, count = 1, lo = 1;
        for (int i = 1; i < nums.length; i++) {
            count = (nums[i] == nums[i - 1]) ? count + 1 : 1 ;
            if (count <= limit) nums[lo++] = nums[i];
        }
        return lo;
    }
}