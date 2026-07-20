class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        if(s.size()<=15){
            for(int i = 0;i<s.size();i++){
                if(s[i]=='I'){
                    if(s[i+1]=='V'){
                        number+=4;
                        i++;
                    }
                    else if(s[i+1]=='X'){
                        number+=9;
                        i++;
                    }
                    else{
                        number+=1;
                    }
                }
                else if(s[i]=='M'){
                    number+=1000;
                }
                else if(s[i]=='X'){
                    if(s[i+1]=='L'){
                        number+=40;
                        i++;
                    }
                    else if(s[i+1]=='C'){
                        number+=90;
                        i++;
                    }
                    else{
                        number+=10;
                    }
                }
                else if(s[i]=='V'){
                    number+=5;
                }
                else if(s[i]=='L'){
                    number+=50;
                }
                else if(s[i]=='D'){
                    number+=500;
                }
                else if(s[i]=='C'){
                    if(s[i+1]=='D'){
                        number+=400;
                        i++;
                    }
                    else if(s[i+1]=='M'){
                        number+=900;
                        i++;
                    }
                    else{
                        number+=100;
                    }
                }
            }
        }
        return number;  
    }
};