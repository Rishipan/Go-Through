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
    return(a+b+c);
}
//Addition of first n natural numbers
int Add(int n){
    int sum=0;
    for(int i=1;i<=n;i++) sum+=i;
    return sum;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"Addition: "<<Add(x,y)<<endl;
    int z;
    cin>>z;
    cout<<"New Addition: "<<Add(x,y,z);
    int n;
    cin>>n;
    cout<<"Addition of first "<<n<<" natural numbers: "<<Add(n);
    return 0;
}
