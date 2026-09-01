class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int x = 0;
        // int ans = 0;
        int sum = 0;
        int num = abs(n - x);

        while(num>k){
            // int temp = x;
            x++;
            num = abs(n-x); 
        }

        while (num <= k) {

            if ((n & x) == 0) {
                sum += x;
            }
            x++;

            num = abs(n - x);
        }
        return sum;
    }
};