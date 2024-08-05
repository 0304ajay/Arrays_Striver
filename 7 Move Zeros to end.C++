class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Method -1
        //  vector<int> temp;
        //  for(auto it:nums){
        //      if(it){
        //          temp.push_back(it);
        //      }
        //  }
        //  for(int idx=temp.size();idx<nums.size();idx++){
        //      temp.push_back(0);
        //  }
        //  nums.clear();
        //  for(auto it:temp){
        //      nums.push_back(it);
        //  }

        //Method -2 In- place
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int j=i+1;
                while(j<n and nums[j]==0){
                    j++;
                }
                if(j<n) swap(nums[i],nums[j]);
            }
        }

    }
};
