class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int max_count=0;
        int max_val=-1;
        for(auto &[val,cnt] :freq){
            if(cnt>max_count){
                max_count=cnt;
                max_val=val;
            }
        }
        return max_val;
    }
};