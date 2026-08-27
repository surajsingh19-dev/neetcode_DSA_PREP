class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0;
        int e=heights.size()-1;
        int water=0;
        while(s<e){
            int area=(e-s)* min(heights[s],heights[e]);
            water=max(area,water);
            if(heights[s]<heights[e]){
                s++;
            }else{
                e--;
            }

        }
        return water;
    }
        
};
