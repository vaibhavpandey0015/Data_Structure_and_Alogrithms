// A Simple Merge based O(n) solution to find
// median of two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int getMedian(int ar1[], int ar2[], int n, int m)
{
   int arr[n+m];
	int i = 0; 
	int j = 0; 
    int  k=0;
	while(i<n && j<m)
    {
      if(ar1[i]<=ar2[j]){
      	arr[k]=ar1[i];
        i++;
        k++;
      }
      else{
        arr[k]=ar2[j];
        j++;
        k++;
      }
    }
 
  while(i<n){
      	arr[k]=ar1[i];
        i++;
        k++;
      }
   while(j<m){
      	arr[k]=ar2[j];
        j++;
        k++;
      }
  
  if((n+m)%2==0){
     return ((arr[(m+n)/2]+arr[((m+n)/2)-1])/2);
  }
  else{
   return arr[(m+n)/2];
  }
}

/* Driver code */
int main()
{
	int ar1[] = {900};
	int ar2[] = {5, 8, 10, 20};

	int n1 = sizeof(ar1)/sizeof(ar1[0]);
	int n2 = sizeof(ar2)/sizeof(ar2[0]);
	cout << getMedian(ar1, ar2, n1, n2);
	return 0;
}

// This is code is contributed by rathbhupendra
