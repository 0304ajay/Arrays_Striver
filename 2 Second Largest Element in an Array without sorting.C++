//{ Driver Code Starts
// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        
        //Method -1
        // int maximum=0;
        // for(int idx=0;idx<arr.size();idx++){
        //     maximum=max(maximum,arr[idx]);
        // }
        
        // int second_largest=-1;
        // for(int idx=0;idx<arr.size();idx++){
        //     if(arr[idx]>second_largest and arr[idx]<maximum){
        //         second_largest=arr[idx];
        //     }
        // }
        // return second_largest;
        
        //Method -2
        int max1=arr[0];
        int max2=-1;
        int temp=0;
        for(int idx=1;idx<arr.size();idx++){
            
            if(arr[idx]>max1){
                temp=max1;
                max1=arr[idx];
                max2=temp;
            }
            if(arr[idx]<max1 && arr[idx]>max2){
                max2=arr[idx];
            }
        }
        return max2==max1?-1:max2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends