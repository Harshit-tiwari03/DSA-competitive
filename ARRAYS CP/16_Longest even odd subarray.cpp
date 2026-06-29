#include<iostream>
using namespace std;

int evenodd(int arr[],int n){

    if (n == 0) return 0;

    int res=1;
    int curr=1;

    for(int i=1; i<n; i++){
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0 ) || (arr[i] % 2 != 0 && arr[i-1] % 2 == 0))
         {
                curr++;
                res=max(res,curr);
         }
         else {curr=1;
         }
        }
    return res;
    }

int main(){
    int arr[] = { 5,10,20,7,2,5,6,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nLongest alternating subarray length: " << evenodd(arr, n);

    return 0;
    }
