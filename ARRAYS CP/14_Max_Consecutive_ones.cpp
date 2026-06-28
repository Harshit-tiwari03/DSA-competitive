#include<iostream>
using namespace std;
// ek res and curr =0 bna
// arr traverse
//agar arr ke element =0 h to curr = 0  kyuki one to aaya hee nhi
// else curr ka count bdha do and curr ko res se compare jo bdha res me dalke return
int maxConsecutiveOnes(int arr[] , int n){
    int res=0;
    int curr=0;

    for(int i=0; i<n; i++){

        if(arr[i] == 0){
            curr=0;
            }
        else {
            curr++;
            res= max(res,curr);
        }
    }
    return res;
    }
int main(){
    int arr[] = {0,1,1,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max ones are "<<maxConsecutiveOnes(arr, n);

    return 0;
    }
