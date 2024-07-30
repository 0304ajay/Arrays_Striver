#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    int maxm = 0;
public:
    void maximum(vector<int>& arr, int idx, int n)
    {
        if (idx == n)
        {
            return;
        }
        else
        {
            maxm = max(maxm, arr[idx]);
            maximum(arr, ++idx, n);
        }
    }
        //Method -1
        // return *max_element(arr.begin(),arr.end());
        
        //Method -2
        // int maximum=0;
        // for(int idx=0;idx<n;idx++){
        //     maximum=max(maximum,arr[idx]);
        // }
        // return maximum;
        
        //MEthod -3
        // sort(arr.begin(),arr.end(),greater<int>());
        // return arr[0];
    int largest(vector<int>& arr, int n)
    {
        maximum(arr, 0, n);
        return maxm;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}
