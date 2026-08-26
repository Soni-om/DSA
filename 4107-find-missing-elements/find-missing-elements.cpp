class Solution {
    bool present(vector<int>& nums, int x){
        int s = 0;
        int e = nums.size()-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(nums[mid] == x){
                return true;
            }else if(nums[mid] < x){
                s = mid +1;
            }
            else{
                e = mid-1;
            }
        }
        return false;
    }
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<bool,int>mp;
        vector<int>ans;
        int s = nums[0] + 1;
        int e = nums[nums.size()-1];

        while(s < e){
            if(!present( nums,s)){
                ans.push_back(s);
            }
            s++;
        }
        return ans;
    }
};