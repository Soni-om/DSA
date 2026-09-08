class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;

        int j =0;
        
        int size = nums1.size() - n;

        while(size != nums1.size()){
            nums1[size] = nums2[j];
            size++;
            j++;
        }

        sort(nums1.begin(), nums1.end());

    }
};