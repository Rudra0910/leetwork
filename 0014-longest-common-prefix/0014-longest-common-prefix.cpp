class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output;
        queue<char> check;
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<strs.size();i++){
            if(strs[i].empty()){
                return output;
            }
        }
        for(int j=0;j<min(strs[0].size(),strs[1].size());j++){
            if(strs[0][j]==strs[1][j]){
                check.push(strs[0][j]);
            }
            else break;
        }
        for(int i=2;i<strs.size();i++){
            queue<char> temp;
            int index=0;
            while(!check.empty() && index<strs[i].size()){
                if(check.front()==strs[i][index]){
                    temp.push(check.front());
                    check.pop();
                    index++;
                }
                else break;
            }
            check=temp;
        }
        while(!check.empty()){
            output.push_back(check.front());
            check.pop();
        }
       return output;
    }
};