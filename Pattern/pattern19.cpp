#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int k=0;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int m=1;m<=k*2;m++){
            cout<<" ";
        }
        for(int z=i;z>=1;z--){
            cout<<"*";
        }
        k++;
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        for(int k=1;k<=(n-i)*2;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
        
    }
}