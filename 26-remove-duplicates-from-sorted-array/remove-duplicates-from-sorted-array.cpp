
//  int ans = 0;
//     if(nums.size() == 1) return 1;
//     for(int i=0; i<nums.size(); i++){
//         int p1 = i;
//         int p2 = i+1;

//         while(p2 != nums.size()){
//             if(p1 == p2){
//                 p1++;
//                 p2++;
//             }else{
//                 swap(nums[p1], nums[p2]);
//                 p1++;
//                 p2++;
//             }
//         }
//     }

//     for(int i=0; i<nums.size(); i++){
//         if (!(nums[i] < nums[i+1])){
//             ans = i+1;
//         }
//     }

//     return ans;
// }

// for(int i=0; i<nums.size()-1; i++){
//     for(int j=i+1; j<nums.size(); j++){
//         if(nums[i] != nums[j]){
//             i++;
//             nums[i] = nums[j];
//             ans ++;
//         }
//     }
// }
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        int arr[nums.size()];

        arr[0] = nums[0];

        int stor = nums[0];
        int j = 1;

        for (int i = 1; i < nums.size() ; i++) {

            if (nums[i] != stor) {
                nums[j] = nums[i];
                j++;
                stor = nums[i];
            }
        }
        return j;
    }
};