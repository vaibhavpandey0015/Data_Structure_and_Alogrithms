#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int L=0;
    int R=n-1;
    int m=0;
    
    for(m; m<=R; m++){
        
        if(a[m]==0){
            int temp= a[m];
            a[m]=a[L];
            a[L]=temp;
            L++;
            continue;
        }
        if(a[m]==2){
            
            int temp= a[m];
            a[m]=a[R];
            a[R]=temp;
            R--;
            m--;
            continue;
        }
         if(a[m]==1){
            continue;
        }
    
    }
    
    }
    
};


int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
