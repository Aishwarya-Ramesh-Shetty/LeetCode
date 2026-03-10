#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;


     for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(char)('A'+(i-1))<<" ";
        }
       
        cout<<endl;
    }
}