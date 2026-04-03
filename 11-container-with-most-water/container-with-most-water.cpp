class Solution {
public:
    int maxArea(vector<int>& height) {
        long long water = 0;
        long long total = 0;
        
        int i=0;
        int j=height.size()-1;

        while(i!=j){
            water = min(height[i],height[j]) * (j-i);
            total = (total>water)?total:water;

            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return total;
    }
};