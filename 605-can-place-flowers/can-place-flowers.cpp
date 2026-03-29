class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int z = flowerbed.size()-1;
        if(flowerbed.size()==1 && flowerbed[0]==0){
            flowerbed[0]==1;
            n--;
        }
        if(flowerbed.size()==2 && flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]==1;
            n--;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]=1;
                n--;
                if(n==0) return true;
            }
            if(flowerbed[z]==0 && flowerbed[z-1]==0){
                flowerbed[z]=1;
                n--;
                if(n==0) return true;
            }
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
                if(n==0) return true;
                // continue;
            }
            
            if(n==0) return true;
        }
        if(n==0) return true;
        return false;
    }
};