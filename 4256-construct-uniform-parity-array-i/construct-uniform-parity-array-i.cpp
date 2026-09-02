class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int count =0;
        for(int i=0; i<nums1.size(); i++){
            if((nums1[i] & 1) != 0){
                count++;
            }
        
        }
        return count >= 1 || count ==0;;
    }
};