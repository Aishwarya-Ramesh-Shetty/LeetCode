#include<iostream>
using namespace std;


int removeDuplicate(int *arr,int n){
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}

int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}