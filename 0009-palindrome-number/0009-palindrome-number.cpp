class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long rev_no=0;
        while(x>0){
            int n=x%10;
            rev_no=(rev_no*10)+n;
            x=x/10;
        }
        if(rev_no==original){
            return true;
        }
        else{
            return false;
        }
        
    }
};