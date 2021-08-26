#include<iostream>
using namespace std;

int main(){
    int A[10];
    
    for(int i=0; i<10; i++){
        cin>>A[i];
    }
    
    cout<<"Array:";
    
    for(int i=0; i<10; i++){
        cout << A[i]<<" ";
    }
    
    int min = A[0];
    int max = A[0];
    
    for(int i=1; i<10; i++){
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<endl;
    cout<<"max= "<< max << endl;
    cout<<"min= "<< min << endl;
    
   
    
     return 0;
}