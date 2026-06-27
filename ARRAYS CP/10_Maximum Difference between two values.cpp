#include<iostream>
using namespace std;
/*
Array ko ek baar loop (traverse)
karte hue sabse chota number minimum elemen yaad rakho,
aur har naye number se us minimum ko minus karke
maximum difference update karte chalo.

*/
int maxDiff(int arr[],int n){
    int res = arr[1] - arr[0];

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
    res=max(res,arr[j] - arr[i]);
    return res;}


int main(){
    int n;
    int arr[]={2,3,10,6,4,8,1};
    n=sizeof(arr)/sizeof(arr[0]);
    cout << "Max Difference: " << maxDiff(arr, n);

    return 0;
    }
