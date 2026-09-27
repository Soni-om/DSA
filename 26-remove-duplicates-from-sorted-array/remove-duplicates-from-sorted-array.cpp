
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int stor = nums[0];
        int j = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != stor) {
                nums[j] = nums[i];
                j++;
                stor = nums[i];
            }
        }
        return j;
    }
};