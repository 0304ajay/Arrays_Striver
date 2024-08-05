class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int idx;
        for(idx=0;idx<nums.size()-1;idx++)
        {
            if(nums[idx]!=nums[idx+1])
            {
                nums[count++]=nums[idx];
            }
        }
        if(nums.size()>=2 and nums[idx]!=nums[idx+1]) nums[count++]=nums[idx+1];
        return count;
    }
};
