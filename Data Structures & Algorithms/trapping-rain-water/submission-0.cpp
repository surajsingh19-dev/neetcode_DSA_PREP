class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int l=height.size()-1;
        int maxL=0;
        int maxR=0;
        int water=0;
        while(i<l){
            if(height[i]<height[l]){
                maxL=max(maxL, height[i]);
                water+=maxL-height[i];
                i++;
            }
            else{
                maxR=max(maxR, height[l]);
                water+=maxR-height[l];
                l--;
            }
        }
        return water;
        
    }
};
