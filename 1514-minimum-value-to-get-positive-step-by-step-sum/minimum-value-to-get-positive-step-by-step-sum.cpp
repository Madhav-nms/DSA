class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minisum = 0;
        for (int value : nums){
            sum = sum + value;
            minisum = min(sum, minisum);
        }
        return 1 - minisum;
    }
};
