#include<iostream>
using namespace std;

void movezerostoend(int *arr,int n){
    int flag = 0;
    int k;
    for(int i=0;i<n;i++){
        if(arr[i]== 0 && flag == 0){
            k=i;
            flag =1;
        }
        if(arr[i]!=0 && flag == 1){
            int temp = arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            k++;
        }
    }
}

int main(){
    int arr[]={1,0,2,3,0,4,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezerostoend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}