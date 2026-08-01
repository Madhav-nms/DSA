class Solution {
public:
    int s_start = 0; 
    int s_length = 1;
    void expand(string &s, int left, int right){
        while (left >= 0 && right < s.size() && s[left] == s[right]){
            int len = right - left + 1;
            if (len > s_length) {
                s_start = left;
                s_length = len;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        for (int i = 0; i < s.size() - 1; i++){
            expand(s, i, i+1);
            expand (s, i, i);
        }
        return s.substr(s_start, s_length);
    }
};