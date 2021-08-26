#include<iostream>
using namespace std;

int main(){
    int A[10];
    
    for(int i=0; i<10; i++){
        cin>>A[i];
    }
    
    cout<<"Array before reversing:";
    
    for(int i=0; i<10; i++){
        cout << A[i]<<" ";
    }
    
    int first=0;
    int  last=9;
    
    while(first<=last){
        int temp=A[first];
        A[first]=A[last];
        A[last]=temp;
        first++;
        last--;
    }
    
    cout<<"Array After reversing:";
    
    for(int i=0; i<10; i++){
        cout << A[i]<<" ";
    }
    
     return 0;
}