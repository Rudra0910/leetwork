#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long reverse(long long x) {
        
        long long rev_no=0;
        while(x!=0){
            int n=x%10;
            rev_no=(rev_no*10)+n;
            if(rev_no>INT_MAX || rev_no<INT_MIN){
            return 0;
        }
            x=x/10;
        }
        return rev_no; 
    }
    int main(){
        long long reverse(long long x);
        return 0;
    }
};