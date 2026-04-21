#include<iostream>
using namespace std;


int findLargeNum(int *arr,int n){
    
    int largeNum = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largeNum){
            largeNum = arr[i];
        }
    }
    return largeNum;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largeNum = findLargeNum(arr,n);
    cout<<largeNum<<endl;
    return 0;
}