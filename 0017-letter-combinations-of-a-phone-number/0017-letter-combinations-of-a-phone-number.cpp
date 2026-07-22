class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<string>> phone;
        vector<string> result;
        if(digits.empty()){
            return result;
        }
        phone['2'] = {"a", "b", "c"};
        phone['3'] = {"d", "e", "f"};
        phone['4'] = {"g", "h", "i"};
        phone['5'] = {"j", "k", "l"};
        phone['6'] = {"m", "n", "o"};
        phone['7'] = {"p", "q", "r", "s"};
        phone['8'] = {"t", "u", "v"};
        phone['9'] = {"w", "x", "y", "z"};
        string current="";
        backtrack(digits,0,current,phone,result);
        return result; 
    }
    private:
        void backtrack(string& digits,int index,string& current,map<char,vector<string>>& phone,vector<string>& result){
            if(index==digits.length()){
                result.push_back(current);
                return;
            }
            char digit=digits[index];
            vector<string> letters=phone[digit];
            for(string letter:letters){
                current+=letter;
                backtrack(digits,index+1,current,phone,result);
                current.pop_back();
            }
        }
};