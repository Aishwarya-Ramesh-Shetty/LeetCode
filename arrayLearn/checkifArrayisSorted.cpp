#include<iostream>
using namespace std;

bool checkifArrayisSorted(int *arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}


int main(){
    int arr[]={2,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = checkifArrayisSorted(arr,n);
    cout<<(isSorted ? "true" : "false")<<endl;
    return 0;
}