#include<iostream>
int partition(int arr[],int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    int k;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            arr[i]=arr[k];
            arr[k]=arr[j];
            arr[j]=arr[i];
        }
        
    }
    arr[low]=arr[k];
    arr[k]=arr[j];
    arr[j]=arr[low];
    return j;
}// chosing a random point at starting or in ending then sort according the less number than them and greater number than them
void qs(int arr[],int low, int high){
    if (low<high){
        int pIndex=partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}// time complexity O(nlogn) and space complexity O(logn)
