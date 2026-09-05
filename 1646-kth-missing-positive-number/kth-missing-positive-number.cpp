class Solution {

    bool present(vector<int>& arr, int tar, int s, int e) {

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == tar) {
                return true;
            } else if (arr[mid] > tar) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return false;
    }

public:
    int findKthPositive(vector<int>& arr, int k) {
        int arrValue = arr[0];
        vector<int> minNo;
        int s = 0;
        int e = arr.size() - 1;

        int i = 1;
        while (k != 0) {

            if (!present(arr, i, s, e)) {
                minNo.push_back(i);
                // i++;
                k--;
            }
            i++;
        }

        int last = minNo.size() - 1;
        int ans = minNo[last];
        return ans;
    }
};