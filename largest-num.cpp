#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int lar=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }// function for finding largest number in array
    cout<<"Largest element is: "<<lar;
    return lar;
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);// calling function largest
    return 0;
}//time complexity O(n) and space complexity O(1)
