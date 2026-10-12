class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        std::unordered_map<char, int> m1;
        std::unordered_map<char, int> m2;
        int i = 0;
        while (i < s.size())
        {
            if (m1.contains(s[i]))
                m1[s[i]] += 1;
            else
                m1[s[i]] = 1;
            if (m2.contains(t[i]))
                m2[t[i]] += 1;
            else
                m2[t[i]] = 1;
            i++;
        }
        if (m1 == m2)
            return true;
        return false;
    }
};
