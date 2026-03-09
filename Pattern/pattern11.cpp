#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int k;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            k=0;
        }
        else{
            k=1;
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k=(k==0?1:0);
        }
        cout<<endl;
    }
}