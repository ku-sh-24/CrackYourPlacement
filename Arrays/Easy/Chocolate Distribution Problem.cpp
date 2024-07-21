//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    // sort the array take the smallest and the Mth smallest number
    sort(a.begin(),a.end());
    long long mini = std::numeric_limits<long long>::max();
    for(int i=0;i<a.size()-m+1;i++){
        if(a[i+m-1]-a[i]<mini){
            mini=a[i+m-1]-a[i];
        }
    }
    return mini;
    }   
};