#include<iostream>
using namespace std;

int printNum(int n,int sum){
    if(n == 0){
        return sum;
    }

    sum = sum + n;
    printNum(n-1,sum);
}

int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    int sum = 0;
    int result = printNum(n,sum);
    cout<<result;
    return 0;
}