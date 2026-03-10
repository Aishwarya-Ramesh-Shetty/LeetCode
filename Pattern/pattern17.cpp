#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<(char)('A'+j);
        }
        for(int m=i-1;m>=1;m--){
            cout<<(char)('A'+(m-1));
        }
        cout<<endl;
    }

}