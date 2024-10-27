class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        string result = "";

        for(char c:t)
            mp[c]++;
        
        int start = 0;
        int end = 0;
        int len = INT_MAX;
        int ans_len = INT_MAX;
        int count = mp.size();
        int startChar=0;

        while(end < s.size())
        {
            char endChar = s[end];
            if(mp.find(endChar) != mp.end())
            {
                mp[endChar]--;
                if(mp[endChar] == 0)
                    count--;
            }

            end++;

            while(count == 0)
            {
                if(end - start < len)
                {
                    len = end -start;
                    startChar = start;
                    ans_len = len; 
                }

                char schar = s[start];

                if(mp.count(schar) == 1)
                {
                    mp[schar]++;
                    if(mp[schar] > 0)
                        count++;
                }

                start++;
            }
        }

        if(ans_len <= s.size())
                result = s.substr(startChar, ans_len);

        return result;
    }
};