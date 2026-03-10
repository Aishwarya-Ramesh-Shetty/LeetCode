#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            cout<<(char)('A'+(j-1))<<" ";;
        }
        cout<<endl;
    }
}