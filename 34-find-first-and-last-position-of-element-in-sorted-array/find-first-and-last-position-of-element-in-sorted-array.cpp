class Solution {
    int l(vector<int>&nums,int s, int e,int& tar, int mid){
        int x = -1;
        while(s<=e){
            if(nums[mid] == tar){
                x = mid;
                e = mid-1;
            }else if(nums[mid] > tar){
                e = mid-1;
            }else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return x;
    }

    int r(vector<int>&nums,int s, int e,int& tar,int mid){
        int y = -1;
        while(s<=e){
            if(nums[mid] == tar){
                y = mid;
                s = mid+1;
            }else if(nums[mid] > tar){
                e = mid-1;
            }else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return y;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;

        vector<int>ans;
        ans.push_back(l(nums, s, e, target, mid));
        ans.push_back(r(nums, s, e,target, mid));
        return ans;
    }
};