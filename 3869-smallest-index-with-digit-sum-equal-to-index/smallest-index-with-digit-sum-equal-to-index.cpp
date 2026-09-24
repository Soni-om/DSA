class Solution {
    bool solve(int d , int i){
        int sum = 0;

        while(d > 0){
            sum += (d % 10);
            d = d /10;
        }
        return sum == i;
        
    }
public:
    int smallestIndex(vector<int>& nums) {
        for(int i= 0; i<nums.size(); i++){
            int digi = nums[i];
            if(solve(digi, i)){
                return i;
            }
        }
        return -1;
    }
};