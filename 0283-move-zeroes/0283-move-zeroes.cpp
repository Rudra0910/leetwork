class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums_int;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums_int.push_back(nums[i]);
            }
        }
        while(count>0){
            nums_int.push_back(0);
            count--;
        }
        nums=nums_int;
    }
};