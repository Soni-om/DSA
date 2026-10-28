class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        unordered_map<int,int> ma;

        for(int i: nums){
            ma[i] = 1;
        }
        int uniqElements = ma.size();
        int DoctorAdvised = nums.size() / 2;

        if(DoctorAdvised >= uniqElements){
            return uniqElements;
        }else{
            return DoctorAdvised;
        }

    }
};