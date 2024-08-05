//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//Method -1 using Hash Map O(n+m)
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}

//Method -2 O(n+m)
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> result;
        int i=0,j=0;
        for(i=0,j=0;i<n and j<m ;){
            
            if(arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
                i++;j++;
            }
            else if(arr1[i]<arr2[j]){
                result.push_back(arr1[i]);
                i++;
            }
            else{
                result.push_back(arr2[j]);
                j++;
            }
            
            while(i<n and arr1[i]==result.back()) {
                i++;
            }
            while(j<m and arr2[j]==result.back()){
                j++;
            }
        }
        
        while(i<n){
            if(result.back()!=arr1[i]){
            result.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if(result.back()!=arr2[j]){
            result.push_back(arr2[j]);
            }
            j++;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
