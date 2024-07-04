class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n<1){
            return false;

        }
        else{
        for(int i=0;i<n-1;++i){
            if(nums[i+1] == nums[i]){
                return true;
            }
        }
   return false;
    }
    }
};
