class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans(n+1, 0);
        for (int i = 0; i < n+1; i++){
            int x = i; 
            int count = 0; 
            while (x > 0) {
                count = count + (x & 1);
                x = x >> 1;
            }
            ans[i] = count;
        }
        return ans;
    }
};