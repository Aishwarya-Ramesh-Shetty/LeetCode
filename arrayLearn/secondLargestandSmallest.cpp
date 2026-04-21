#include<iostream>
#include<climits>
using namespace std;


int findSecondLarge(int *arr,int n){
    int large = INT_MIN;
    int secondLarge = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>large){
            secondLarge = large;
            large = arr[i];
        }
        if(arr[i]>secondLarge && arr[i]!=large){
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int findSecondSmall(int *arr,int n){
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secondSmall = small;
            small = arr[i];
        }
        if(arr[i]<secondSmall && arr[i]!=small){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int main(){
    int arr[] = {12,34,22,432,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int secondLarge = findSecondLarge(arr,n);
    int secondSmall = findSecondSmall(arr,n);
    cout<<"Second Largest value is:"<<secondLarge<<endl;
    cout<<"Second Smallest value is:"<<secondSmall<<endl;
    return 0;
}