class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int index = 0;
        vector<int> ans;
        int s = nums[0];
        int n = nums.size() - 1;
        int e = nums[n];

        for (int i = s; i <= e; i++) {
            if (i != nums[index]) {
                ans.push_back(i);
            } else {
                index++;
            }
        }
        return ans;
    }
};