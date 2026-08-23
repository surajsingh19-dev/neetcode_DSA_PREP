class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        int n=s.size();
        int i = 0;
        int l = n-1;
        
        while(i<l){
            tmp=s[i];
            s[i]=s[l];
            s[l]=tmp;
            i++;
            l--;
            
        }
        
    }
};