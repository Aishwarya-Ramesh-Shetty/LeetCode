#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<'*';
        }
        for(int m=n-1;m>=i;m--){
            cout<<'*';
        }
        cout<<endl;
    }
}