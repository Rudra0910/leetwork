class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> unique;
        unordered_set<int> triplets;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                int x=nums[i]^nums[j];
                unique.insert(x);
            }
        }
        for(int p:unique){
            for(int k:nums){
                triplets.insert(p^k);
            }
        }
        return triplets.size();
        
    }
};