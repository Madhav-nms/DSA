class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());
        
        vector<int> p_sum(n);
        p_sum[0] = nums[0];

        for (int i = 1; i < n; i++ ){
            p_sum[i] = nums[i] + p_sum[i-1];
        }

        vector<int> answer(m);
        for (int j = 0 ; j < m; j++){
            answer[j] = upper_bound(p_sum.begin(), p_sum.end(),queries[j]) - p_sum.begin();
        }
        return answer;
    }
};