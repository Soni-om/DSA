class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> ma;
        map<int,int> mai;

        for(int i=0; i<arr.size(); i++){
            if(ma.find(arr[i]) != ma.end()){
                ma[arr[i]]++;
            }else{
                ma[arr[i]] = 1;
            }
        }

        for(auto i: ma){
            if(mai.find(ma[i.first]) != mai.end()){
                return false;
            }else{
                mai[i.second] = 1;
            }
        }
        return true;
    }
};