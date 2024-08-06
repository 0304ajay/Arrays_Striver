class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //Method -1 : Sort the Array And then Compare the elements 

        //Method -2 : Use an additional Array to keep track of the frequency

        //Method -3 : XOR

        int result=0;
        for(auto it:nums){
            result^=it;
        }
        return result;
    }
};
