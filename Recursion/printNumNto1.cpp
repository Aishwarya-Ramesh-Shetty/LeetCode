#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;
    printNum(n-1);
}

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    printNum(n);
    return 0;
}