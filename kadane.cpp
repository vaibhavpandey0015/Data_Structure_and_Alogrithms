#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    long long max(long long a, long long b){
        if(a>=b)return a;
        return b;
    }
    long long maxSubarraySum(int arr[], int n){
        
        long long best=0, sum=0;
        
         for(int j=0; j<n; j++){
                 
             if(j==0 && arr[0]<0){
                 sum=arr[0];
                 best=arr[0];
             }
             else{
                sum=max(sum+arr[j],arr[j]);
                best=max(sum,best);
             }
             
             
         }
        return best;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
 