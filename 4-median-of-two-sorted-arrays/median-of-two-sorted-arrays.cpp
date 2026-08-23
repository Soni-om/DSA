class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> stor;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                stor.push_back(nums1[i++]);
            } else {
                stor.push_back(nums2[j++]);
            }
        }

        while (i < nums1.size()) {
            stor.push_back(nums1[i++]);
        }

        while (j < nums2.size()) {
            stor.push_back(nums2[j++]);
        }

        double ans = 0;
        int mid = stor.size() / 2;

        if (stor.size() % 2 == 0) {
            ans = (stor[mid] + stor[mid - 1]) / 2.0;
        } else {
            ans = stor[mid];
        }

        return ans;
    }
};