class Solution {
public:
    int fib(int n) {
        int ans;
        if(n<=1){
           return n;
        }
        else{
            return fibn(n);  
        }
        
    }
    private:
        int fibn(int x){
            int ans;
            if(x==1){
                return 1;
            }
            else if(x==0){
                return 0;
            }
            ans=fibn(x-1)+fibn(x-2);
            return ans;
        }
};