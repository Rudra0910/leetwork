class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        vector<int> final;
        for(int i=0;i<pos.size();i++){
            final.push_back(pos[i]);
            final.push_back(neg[i]);
        }
        return final;
    }
};