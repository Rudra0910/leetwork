class Solution {
public:
    string intToRoman(int num) {
       string output="";
       map<int,string> table;
       table[1]="I";
       table[4]="IV";
       table[5]="V";
       table[9]="IX";       
       table[10]="X";
       table[40]="XL";
       table[50]="L";
       table[90]="XC";
       table[100]="C";
       table[400]="CD";
       table[500]="D";
       table[900]="CM";
       table[1000]="M";  
       int i=0;
       int keys[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        while(num>0){
            if(num>=keys[i]){
                output+=table[keys[i]];
                num=num-keys[i];
            }
            else{
                i++;
            }     
        }
     return output;
    }
    
};