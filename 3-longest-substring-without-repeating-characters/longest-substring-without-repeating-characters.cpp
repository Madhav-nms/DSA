class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char> window;
        int left = 0; 
        int max_length = 0;
        for (int i = 0; i < s.size(); i++){
            while (window.count(s[i])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[i]);
            max_length = max(max_length, i - left + 1);
        }
        return max_length;
    }
};