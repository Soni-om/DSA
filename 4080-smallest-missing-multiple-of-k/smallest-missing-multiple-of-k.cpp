class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        long long mp = 1;
        int i = 1;
        while (true) {
            mp = k * i;
            if (st.find(mp) == st.end()) {
                return mp;
            }
            i++;
        }
        return -1;
    }
};