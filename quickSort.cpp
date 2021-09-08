#include <stdio.h>
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int loc=partition(arr,low,high);
        quickSort(arr,low,loc-1);
        quickSort(arr,loc+1,high);
   }
}

int partition (int arr[], int low, int high)
{
   int pivot=arr[low];
   int start=low;
   int end=high;
   
   while(start<end){

       while(arr[start]<=pivot)
       start++;
       
       while(arr[end]>pivot)
       end--;
       
       
       if(start<end){
           int temp=arr[start];
           arr[start]=arr[end];
           arr[end]=temp;
       }
       
   }
   
   int temp=arr[low];
   arr[low]=arr[end];
   arr[end]=temp;
   return end;
   
}

int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  