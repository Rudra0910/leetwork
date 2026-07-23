class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0,ans=0;
        long long windowSum=0;
        for(int right=0;right<nums.size();right++){
            windowSum+=nums[right];
            while((long long)nums[right]*(right-left+1)-windowSum>k){
                windowSum-=nums[left];
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};