class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> umap;
        for (int num: nums) { 
            umap[num]++;
        }
        vector<vector<int>> bucket (nums.size() + 1);
        for (auto it: umap) {
            int number = it.first;
            int count = it.second;
            bucket[count].push_back(number);
        }
        vector<int> result;
        for (int i = nums.size(); i >=0; i-- ){
            for (int num: bucket[i]) {
                result.push_back(num);
                if (result.size() >= k) {
                    return result;
                }
            }
        }
            return result;
        }
    };
