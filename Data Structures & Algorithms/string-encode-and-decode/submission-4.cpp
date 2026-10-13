class Solution {
public:

    string encode(vector<string>& strs) {
        int i = 0;
        string s;
        while (i < strs.size())
        {
            s += strs[i];
            s += (char)(127);
            i++;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        stringstream ss(s);
        string token;
        while (getline(ss, token, (char)127))
            v.push_back(token);
        return v;
    }
};
