class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> u;
        for (int i : nums){
            u[i]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto pair : u) {
            int val = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(val); 
        }
        vector<int> res;
        int n = buckets.size() - 1;
        for (int i = n ; i>= 1 ; i--){
            for (int val : buckets[i]){
                res.push_back(val);
                if (res.size() == k ) return res;
            }
        }
        return res;
        }
    };
