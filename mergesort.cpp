#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int size1=m-l+1;
         int size2=r-m;
         
         int Larr[size1];
         int Rarr[size2];
         
         for(int i=0;i<size1;i++)
            Larr[i]=arr[l+i];
         for(int i=0;i<size2;i++)
            Rarr[i]=arr[m+1+i];
         
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
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int m=(l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
} 