class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //Method -1 Brute Force 
        // int sum=0;
        // vector<int> result;
        // for(int idx=0;idx<nums.size();idx++){
        //     sum=nums[idx];
        //     for(int idx2=idx+1;idx2<nums.size();idx2++){
        //         if(sum+nums[idx2]==target){
        //             result.push_back(idx);
        //             result.push_back(idx2);
        //             break;
        //         }
        //     }            
        // }
        // return result;

        //Method -2 Optimal Approach
        map<int,int> mp;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                auto it=mp.find(rem);
                result.push_back(i);
                result.push_back(it->second);
                break;
            }
            mp[nums[i]]=i;
        }
        return result;
    }
};
