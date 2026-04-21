#include<iostream>
using namespace std;


// void rotateRight(int *arr,int n,int k){
//     k = k % n;
//     int val[k];
//     for(int i=0;i<k;i++){
//        val[i] = arr[n-k+i];
//     }

//     for(int i=n-1;i>=k;i--){
//         arr[i]=arr[i-k];
//     }
//     for(int i=0;i<k;i++){
//         arr[i] = val[i];
//     }
    
// }


void rotateLeft(int *arr,int n,int k){
    k = k % n;
    int val[k];
    for(int i=0;i<k;i++){
        val[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=val[i];
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    // rotateRight(arr,n,k);
    rotateLeft(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}