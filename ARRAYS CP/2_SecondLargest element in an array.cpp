#include<iostream>
using namespace std;
// 1. Declare or define getlargest BEFORE using it
//Array me sabse bada element (largest) dhoondo, fir loop chala kar use chhodkar baaki elements me se sabse bada (second largest) nikaal lo.
int getlargest(int arr[],int n){
int largest=0;
for(int i=1; i<n; i++)
       if(arr[i] > arr[largest])
        largest = i;
        return largest;}

        // yahanse largest mil gya
int secondlargest(int arr[],int n){

int largest = getlargest(arr,n);

int res = -1;

for(int i=0; i<n; i++){

       if(arr[i] != arr[largest])
        {
        if(res == -1)
        res = i;

        else if (arr[i]>arr[res])
            res=i;  }
}
return res; }

int main(){
    cout<<"Second largest element in an arr: " ;
    int arr[]={9,2,7,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<secondlargest( arr, n);
    }














