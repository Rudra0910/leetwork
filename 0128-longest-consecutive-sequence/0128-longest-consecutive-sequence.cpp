class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int maxlen=1;
       int l=1;
       if(n==0)return 0;
       for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1]){
                l++;
                maxlen=max(maxlen,l);
            }
            else if(nums[i]==nums[i+1]) continue;
            else{
                l=1;
            }
        }
        return maxlen;
    }
};