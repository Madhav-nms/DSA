void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int left, right, temp;

    // reverse the array 
    left = 0;
    right = numsSize - 1;
    while (left < right){
        temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    } 
    //Reverse first k elements 
    left = 0; 
    right = k - 1; 
    while (left < right){
        temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    } 

    // Reverse the remaining elements 
    left = k;
    right = numsSize - 1;
    while (left < right){
        temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    } 
}