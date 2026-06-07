#include<iostream>
using namespace std;

void printNum(int count,int n){
    if(count == (n+1)){
        return;
    }

    cout<<count<<endl;
    printNum(count+1,n);
}

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    int count = 1;
    printNum(count,n);
    return 0;
}