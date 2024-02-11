/// Addition of two numbers
#include<iostream>
using namespace std;

// Addition of two numbers
int Add(int a, int b){
    return (a+b);
}

// complete this
int Add(int a, int b, int c){
    // Add your code
    return (a+b+c);
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<Add(x,y);
    // cout<<" "<<Add(x,y,z);
}