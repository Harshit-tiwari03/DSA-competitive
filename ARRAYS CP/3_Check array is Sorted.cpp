#include<iostream>
using namespace std;
// i=0 j=1
//traverse kr i se and j=i=1 se , agar array ka ith ele ya ek pehele wala ele chota h to true agar bda aaya to array sorted nhi h
//o(n2)

bool isSorted(int arr[],int n) {
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){

            if(arr[j]<arr[i]){
            return false;    }
                                }
                          }
            return true; }

int main(){
    int arr[] = {4,5,6,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<isSorted(arr,n);
    return 0;
    }
