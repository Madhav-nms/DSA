class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = nums.size() - 1;
        int temp = 0;
        while (left < right){
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--; 
        }

        // rotate the first k elements alone 
        k = k % n;
        left = 0;
        right = k - 1;
        while (left < right){
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        } 

        // rotate the rest of the elements 
        left = k;
        right = nums.size() - 1;
        while (left < right){
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};