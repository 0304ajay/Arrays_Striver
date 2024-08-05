class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // //Method -1 
        // vector<int> rotate(nums.begin(),nums.end());
        // for(int idx=0;idx<nums.size();idx++){
        //     int n=nums.size();
        //     nums[(idx+k)%n]=rotate[idx];
        // }

        
        //Method -2 //Time Limit Exceeded
        // int n=nums.size();
        // for(int idx=0;idx<k;idx++){
        //     int temp=nums[n-1];
        //     nums.erase(nums.begin()+(n-1));
        //     nums.insert(nums.begin(),temp);
        // }

        //Method -3 Reverse
         k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
            


    }
};
