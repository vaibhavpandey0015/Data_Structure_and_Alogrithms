#include<iostream>
#include<array>
using namespace std;

int BinarySearch(int A[], int item, int LB, int UB){
    	
    	int L=LB;
    	int U=UB;
    	int mid=(L+U)/2;
    	
    	while((A[mid]!=item)&&(L<=U)){
    	 if(A[mid]<item)
    	 	L=mid+1;
    	 else
    	 	U=mid-1; 
    	 mid=(L+U)/2;			
    	}
    	if(A[mid]==item)
    		return mid;
    	else	
    		return -1;
    }

int main(){
    int item ;
    int A[]={23,34,38,42,49,53,65,72,87,89,91};
    int size=sizeof(A)/sizeof(A[0]);
    
    cout<<"Given Array: ";
    for(int i=0;i<size;i++){
    	  cout<<A[i]<<" ";
    }
    
    cout<<"\nEnter item to search in array:";
    cin>>item;
    cout<<"\nIndex of item is: " << BinarySearch(A, item, 0, size-1) <<endl;
    return 0;
}