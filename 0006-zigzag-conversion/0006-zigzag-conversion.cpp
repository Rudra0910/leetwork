class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(numRows);
        int currRow=0;
        bool going_down=false;
        for(char c:s){
            rows[currRow]+=c;
            if(currRow==0 || currRow==numRows-1){
                going_down=!going_down;
            }
            currRow+=going_down ? 1: -1;
        }
        string result;
        for(string row : rows){
            result+=row;
        }
        return result;

    }
};