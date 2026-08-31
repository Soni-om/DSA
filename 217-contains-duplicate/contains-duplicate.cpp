class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int fl = false;
        if (nums.size() == 1)
            return fl;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                fl = true;
            }
        }
        return fl;
    }
};