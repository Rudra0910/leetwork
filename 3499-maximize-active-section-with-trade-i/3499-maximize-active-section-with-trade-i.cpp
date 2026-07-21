class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        s="1"+s+"1";
        int ones=count(s.begin(),s.end(),'1')-2;
        int best=0;
        int i=1;
        while(i<(int)s.size()-1){
            if(s[i]=='0'){
                int j=i;
                while(j<(int)s.size()&&s[j]=='0') j++;
                int zerolen=j-i;
                int k=j;
                while(k<(int)s.size()&&s[k]=='1')k++;
                int onelen=k-j;
                bool oneisinterior=(k<(int)s.size()-1);
                if(k<(int)s.size()&&s[k]=='0'){
                    int m=k;
                    while(m<(int)s.size()&&s[m]=='0')m++;
                    int zerolen2=m-k;
                    best=max(best,zerolen+zerolen2);
                }
                i=j;
            }else{
                i++;
            }
        }
        return ones+best;

        
        
    }
};