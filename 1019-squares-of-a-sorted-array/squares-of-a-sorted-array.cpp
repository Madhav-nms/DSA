class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int pos = nums.size() - 1;
        vector<int> result(nums.size());
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];
                left++;
                pos--;
            }
            else {
                result[pos] = nums[right] * nums[right];
                right--;
                pos--;
            }
            
        }
        return result;
    }
};