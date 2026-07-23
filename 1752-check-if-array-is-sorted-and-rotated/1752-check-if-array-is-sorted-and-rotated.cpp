class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> nums_new =nums;
        sort(nums_new.begin(),nums_new.end());
        int count=0;
        while(count<nums.size()){
            if(nums==nums_new){
                return true;
            }
            else if(nums_new!=nums){
                rotate(nums);
                count++;
            }
        }   
        return false;    
    }
    private:
    vector<int> rotate(vector<int>& nums){
        int temp=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            nums[i]=nums[i+1];
        }
        nums[nums.size()-1]=temp;
        return nums;
    }
};