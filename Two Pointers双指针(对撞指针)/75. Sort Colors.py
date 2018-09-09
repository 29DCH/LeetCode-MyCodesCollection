class Solution:
    def sortColors(self, nums):
        zero = -1
        i = 0 
        two = len(nums)
        while i < two:
            if nums[i] == 1:
                i += 1
            elif nums[i] == 2:
                two -= 1
                nums[two], nums[i] = nums[i], nums[two]
            else:
                zero += 1
                nums[zero], nums[i] = nums[i], nums[zero]
                i += 1