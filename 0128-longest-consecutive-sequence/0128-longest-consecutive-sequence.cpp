class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> n;
        for(int i:nums){
            n[i]++;
        }
        int longest=0;
        for(auto &p:n){
            int num=p.first;
            if(n.find(num-1)==n.end()){
                int len=1;
                int curr=num;
            
                while(n.find(curr+1)!=n.end()){
                    curr++;
                    len++;
                }
                longest=max(longest,len);
            }
        }

        return longest;
    }
};