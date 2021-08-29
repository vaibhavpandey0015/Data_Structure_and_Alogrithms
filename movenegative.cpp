#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter 10 signed and unsigned digits in array: ";
    for (int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    
    int n=0;
    for (int i = 0; i < 10; i++) {
        if(arr[i]<0){
            int temp=arr[i];
            arr[i]=arr[n];
            arr[n]=temp;
            n++;
        }
    }

   for (int i = 0; i < 10; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
