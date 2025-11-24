#include<bits/stdc++.h>
using namespace std;
void fibo(int n ){
    int a=0,b=1;
    for(int i;i<n;i++){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;

    }
}
int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<"please enter a number grater than 1"<<endl;

    }
    else{
        fibo(n);
    }
    return 0;
}// remember about recursion tree
// time complexity is O(2^n) and space complexity is O(n)
