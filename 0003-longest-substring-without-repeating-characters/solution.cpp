class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        int freq = 0;
        while (j < n) {
            ++mp[s[j]];
            if (mp[s[j]] > 1) 
            {
                while(mp[s[j]] > 1)
                {
                    --mp[s[i]];
                    i++;
                }
            }
            if (j - i + 1 > freq) 
            {
                freq = j - i + 1;
            }
            j++;
        }
        return freq;
    }
};
