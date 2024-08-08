class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Method -1 Using Hash Map - O(n),O(n)
    //     map<int,int> mp;
    //     //LOGIC
    //     for(auto tmp:nums)
    //     {
    //         mp[tmp]++;
    //     }

    //     for(auto it=mp.begin();it!=mp.end();it++)
    //     {
    //         if((it->second)>(int)(nums.size()/2))
    //         {
    //             return it->first;
    //         }
    //     }

        //Method -2 By sorting - O(nlogn) , O(1)
        // sort(nums.begin(),nums.end());
        // int count=0;
        // int temp=nums[0];
        // int idx=0;
        // for(idx=0;idx<nums.size();){
        //     if(temp==nums[idx]){
        //         count++;
        //         idx++;
        //     }
        //     else if(count>(nums.size()/2)){
        //         return nums[idx-1];
        //     }
        //     else{
        //         temp=nums[idx];
        //         count=0;
        //     }
        // }
        
        // return nums[idx-1];

        //Method -3 Moores Voting Algorithm
        int cnt=0;
        int ele=0;
        int n=nums.size();
        for(int idx=0;idx<n;idx++){
            if(cnt==0){
                cnt++;
                ele=nums[idx];
            }
            else if(ele==nums[idx]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ele;
    }
};
