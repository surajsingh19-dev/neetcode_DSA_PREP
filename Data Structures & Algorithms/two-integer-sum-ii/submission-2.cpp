class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0;
        int e=numbers.size()-1;
        while(s<=e){
            int cur=numbers[s]+numbers[e];
            if(cur>target){
                e--;
            }
            else if(cur<target){
                s++;
            }
            else{
                return{s+1,e+1};
            }
        }
        
    }
};
