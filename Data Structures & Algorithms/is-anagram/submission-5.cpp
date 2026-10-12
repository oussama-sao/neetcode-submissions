class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        vector<int> contador(26, 0);
        for (int i=0;i<s.size();i++){
            contador[s[i]-'a']++;
            contador[t[i]-'a']--;

        }
        for(int oi:contador){
            if (oi!=0) return false;
        }
        return true;
    }

};
