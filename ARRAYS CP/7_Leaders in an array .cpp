#include<iostream>
using namespace std;

void leaderinarr(int arr[],int n){
    int currentele = arr[n-1];
    cout<<currentele<<" ";


    for(int i=n-2; i>=0; i--){
        if(currentele<arr[i]){
            currentele=arr[i];
            cout<<currentele<<" ";
        }
    }
    }
int main(){
    int arr[]={9,5,3,7,8,1};

    int n=sizeof(arr)/sizeof(arr[0]);
    leaderinarr(arr,n);

    return 0;
    }
