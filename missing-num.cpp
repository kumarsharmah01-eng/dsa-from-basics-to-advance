#include<iostream>
using namespace std;
int missNum(int arr[], int n){
    int total=n*(n+1)/2;
    int sum =0;
    for (int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return total-sum;

}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of the array"<<endl;
    for (int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int missing=missNum(arr,n);
    cout<<"The missing number is "<<missing<<endl;
    return 0;
}//time complexity is O(n) and space complexity is O(1)
