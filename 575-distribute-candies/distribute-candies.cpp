class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int uniqueValue = 1;
        int DrAadvaice = candyType.size() / 2;
        int Stor = candyType[0];

        for(int i=1; i<candyType.size(); i++){
            
            if(candyType[i] != Stor){
                uniqueValue++;
                Stor = candyType[i];
            }
        }

        if(DrAadvaice >= uniqueValue){
            return uniqueValue;
        }else{
            return DrAadvaice;
        }
    }
};