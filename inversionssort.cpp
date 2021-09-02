#include<iostream>
using namespace std;

void inversionssort(int arr[],int n){

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                {
                int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
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
    
    inversionssort(arr,n);
  
    cout<< "\nArray After sort";
    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
    }
    cout<<"\n";
       
    return 0;
}