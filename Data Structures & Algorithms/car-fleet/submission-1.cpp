class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float> st;
        vector<pair<int,int>> spos(position.size());
        for (int i = 0; i < position.size(); i++)
            spos[i] = {position[i], speed[i]};
        
        std::sort(spos.begin(), spos.end(), std::greater<>());
        for (int i = 0; i < position.size(); i++)
        {
            float time = static_cast<float>(target - spos[i].first) / spos[i].second;
            if (!st.empty() && time <= st.top())
                continue;
            st.push(time);
        }
        return st.size();
    }
};
