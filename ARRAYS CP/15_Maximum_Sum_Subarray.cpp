#include<iostream>
using namespace std;
// kadane's algorithm
//array mein se ek aisa continuous (lagaatar) hissa
//(subarray) dundhna jiska total sum sabse bada (maximum) ho.
// if all elements positive so array sum is subarr sum
int Maxsumsubarry(int arr[],int n){
    int res=arr[0];
    int maxEnding = arr[0];

    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding + arr[i] , arr[i]);
        res = max(res,maxEnding);
        }
        return res;
    }

int main(){
    int arr[]={-3,8,-2,4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Maxsumsubarry(arr,n);

    return 0;
    }
