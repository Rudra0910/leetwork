class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>column;
        vector<int>row;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]==0){
                    column.push_back(j);
                    row.push_back(i);
                }
                else continue;
            }
        }
        for(int i=0;i<row.size();i++){
            m[row[i]].assign(m[row[i]].size(),0);
        }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<column.size();j++){
                m[i][column[j]]=0;
            }
        }
    }
};