class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum =0,Total=0,count=0;
        for(int i=0;i<arr.size();i++){
            Total += arr[i];
        }
        if(Total == 0 && arr[0]==0) return true;
        if(Total%3 !=0 ){
            return false;
        }
        int Target = Total / 3;
        
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum == Target){
                count++;
                sum=0;
            }
        }
        if(count < 3){
            return false;
        }
        return true;
    }
};