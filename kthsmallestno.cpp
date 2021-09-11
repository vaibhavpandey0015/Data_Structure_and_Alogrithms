// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
   void merge(int arr[], int l, int m, int r){
    
    int size1=m-l+1;
    int size2=r-m;
    
    int Larr[size1];
    int Rarr[size2];
    
    for(int i=0; i<size1; i++){
        Larr[i]=arr[l+i];
    }
    for(int i=0; i<size2;i++){
        Rarr[i]=arr[m+1+i];
    }
    
    
    int i=0;
    int j=0;
    int k=l;
    
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
    
}

void mergeSort(int arr[],int l, int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        mergeSort(arr,l,r);
        return arr[k-1];
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends