#include<iostream>
using namespace std;

void printName(string name,int count){
    if(count == 5){
        return;
    }
    cout<<name<<endl;
    printName(name,count+1);

}

int main(){
    string name = "Ash";
    int count = 0;
    printName(name,count);
    return 0;
}