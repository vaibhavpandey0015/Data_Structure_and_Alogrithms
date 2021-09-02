#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){

    for(int i=0;i<n;i++){
         for(int j=0;j<n-1;j++){
             if(arr[j]>arr[j+1]){
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
    }

}

int main(){
    cout<<"Enter the size of Array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
         cout<< "Enter element no. "<< i+1<<": ";
         cin>>arr[i];
    }

    cout<< "\nArray Before sort: ";
    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    bubblesort(arr,n);
  
    cout<< "\nArray After sort";
    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
    }
    cout<<"\n";
       
    return 0;
}