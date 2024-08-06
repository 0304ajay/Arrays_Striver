class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        //Method -1
        int count=0;
        int maximum=0;
        for(int idx=0;idx<nums.size();idx++){
            if(nums[idx]==1){
                count++;
            }
            else{
                maximum=max(maximum,count);
                count=0;
            }
        }
        maximum=max(maximum,count);
        return maximum;
    }
};
