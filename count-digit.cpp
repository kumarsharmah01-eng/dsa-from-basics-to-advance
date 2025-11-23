#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,lastdigit;
    cout<<"enter the numbe:";
    cin>>n;
    while (n>0){
        lastdigit=n%10; //finding last with the help of remainder
        count=count+1;//counting and adding all the digits
        n=n/10;//again calculating the last digit
    }
    cout<<count;
    cout<<endl;
}// time complexity O(d) and space complexity O(1)
