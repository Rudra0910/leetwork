class Solution {
public:
    int strStr(string haystack, string needle) {
        //lps
        int len=0;
        int i=1;
        vector<int> pi(needle.size());
        pi[0]=0;
        while(i<needle.size()){
            if(needle[i]==needle[len]){
                len++;
                pi[i]=len;
                i++;
            }
            else if(needle[i]!=needle[len]){
                if(len>0){
                    len=pi[len-1];
                }
                else if(len==0){
                    pi[i]=0;
                    i++;
                }
            }
        }

        int a=0;
        int b=0;
        while(a<haystack.size() && b<needle.size()){
            if(needle[b]==haystack[a]){
                a++;
                b++;
            }
            
            else if(needle[b]!=haystack[a]){
                if(b>0){
                    b=pi[b-1];
                }
                else if(b==0){
                    a++;
                }
            }
        }
       if(b==needle.size()){
         return a-needle.size();
        }

       return -1; 
    }
};