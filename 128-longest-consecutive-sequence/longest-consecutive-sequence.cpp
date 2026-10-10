class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int stor = -1000000000;
        int count = 1;
        int ans_count = count;

        map<int, int> ma;
        for (int i = 0; i < nums.size(); i++) {
            ma[nums[i]] = 1;
        }

        for (auto i : ma) {
            if (i.first != stor + 1) {
                stor = i.first;

                ans_count = max(ans_count, count);

                count = 1;
            } else {
                stor = i.first;
                count++;
                ans_count = max(ans_count, count);
            }
        }
        return ans_count;
    }
};