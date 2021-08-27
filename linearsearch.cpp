#include<iostream>
#include<array>
using namespace std;

int LinearSearch(int A[], int item, int size){
    	for(int i=0;i<size;i++){
    		if(A[i]==item){
    		 	return i;
    		 } 
    	}
    	return -1;
    }

int main(){
    int item ;
    int A[10];
    cout<<"\nEnter 10 element in Array:\n";
    for(int i=0; i<10; i++){
        cin>>A[i];
    }
    cout<<"\nEnter item to search in array:";
    cin>>item;
    cout<<"\nIndex of item is" << LinearSearch(A, item, 10) <<endl;
    return 0;
}