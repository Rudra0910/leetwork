class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int p1maxadv=curplaadv(nums,0,nums.size()-1);
        if(p1maxadv>=0) return true;
        else return false;
    }
    private:
        int curplaadv(vector<int>& nums,int left, int right){
            if(left==right) return nums[left];
            
            int chooseleft=nums[left]-curplaadv(nums,left+1,right);
            int chooseright=nums[right]-curplaadv(nums,left,right-1);
            return max(chooseleft,chooseright);
        }
};