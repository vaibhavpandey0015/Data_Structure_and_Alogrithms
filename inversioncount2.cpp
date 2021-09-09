#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
   
    long long int merge(long long arr[], long long int l, long long int m, long long int r){
        
        long long int size1=m-l+1;
        long long int size2=r-m;
        
        long long int Larr[size1];
        long long int Rarr[size2];
        
        for(long long int i=0;i<size1;i++)
            Larr[i]=arr[l+i];
        
        for(long long int i=0;i<size2;i++)
            Rarr[i]=arr[m+1+i];
        
        
        long long int i=0;
        long long int j=0;
        long long int k=l;
        long long int inversion_count=0;
        
        while(i<size1 && j<size2){
            if(Larr[i]<=Rarr[j]){
                arr[k]=Larr[i];
                i++;
                k++;
            }
            else{
                arr[k]=Rarr[j];
                j++;
                k++;
                inversion_count = inversion_count + (size1-i);
            }
        }
        while(i<size1){
            arr[k]=Larr[i];
            i++;
            k++;
        }
        while(j<size2){
                arr[k]=Rarr[j];
                j++;
                k++;
            
        }
        return inversion_count;
    }
    
    
    
    
    long long int mergeSort(long long arr[],long long int l, long long int r){
        long long int inversion_count=0;
        long long int m;
        if(l<r){
            m=(l+r)/2;
            inversion_count += mergeSort(arr,l,m);
            inversion_count += mergeSort(arr,m+1,r);
            inversion_count += merge(arr,l,m,r);
        }
    
        return inversion_count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long int l=0;
        long long int r=N-1;
        return mergeSort(arr,l,r);
    }

};

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  