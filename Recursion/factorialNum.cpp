#include<iostream>
using namespace std;

int printNum(int n){
    if(n == 1){
        return 1;
    }

    return n * printNum(n-1);
}

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    int result = printNum(n);
    cout<<result;
    return 0;
}