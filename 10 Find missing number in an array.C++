class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Method - 1   O(n) O(1)
        // int sum = 0;
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     sum += nums[i];
        // }
        // int value = (n * (n + 1) / 2);
        // return value - sum;

        // Method -2   can be Done Using Multiplication Also

        // Method -3
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};
