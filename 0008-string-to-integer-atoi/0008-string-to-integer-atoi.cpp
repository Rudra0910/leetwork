class Solution {
public:
    long long myAtoi(string s) {
        long long num=0;
        if(s.size()<=200){
            bool isneg=false;
            bool seennegsign=false;
            bool seenpossign=false;
            bool startednumber=false;
            for(int i = 0;i<s.size();i++){
                if(s[i]==' '){
                    if(startednumber==false&&seennegsign==false&&seenpossign==false){
                        continue;
                    }
                    else{
                        break;
                    }
                }
                else if(s[i]=='-'){
                    if(seennegsign==false && startednumber==false&&seenpossign==false){
                        isneg=true;
                        seennegsign=true;
                    }
                    else if(startednumber||seennegsign||seenpossign)break;
                }
                else if(s[i]=='+'){
                    if(startednumber==false&& seennegsign==false&&seenpossign==false){
                        seenpossign=true;
                        continue;
                    }
                    else break;
                }
                else if(isdigit(s[i])){
                    int digit = s[i] - '0';
                    startednumber = true;
                    if(num > INT_MAX/10 || 
                    (num == INT_MAX/10 && digit > 7)){
                        return isneg ? INT_MIN : INT_MAX;
                    }
                    num = num*10 + digit;
                }
                else if(isalpha(s[i])|| s[i]=='.') break;
            }
            if(isneg){
                num=-num;
            } 
        }
        return num;
    }
};