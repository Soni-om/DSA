class Solution {
public:
    int distributeCandies(vector<int>& nums) {

        unordered_set<int> se(nums.begin(), nums.end());

        int uniqElements = se.size();
        int DoctorAdvised = nums.size() / 2;

        if (DoctorAdvised >= uniqElements) {
            return uniqElements;
        } else {
            return DoctorAdvised;
        }
    }
};