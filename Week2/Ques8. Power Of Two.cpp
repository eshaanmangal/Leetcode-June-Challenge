class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0){
            return false;
        }
        
        long var = n&(n-1);
        
        return var==0;
    }
};