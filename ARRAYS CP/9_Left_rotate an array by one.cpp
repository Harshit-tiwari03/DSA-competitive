#include<iostream>
using namespace std;

void rotateleft(int arr[], int n) {
    if (n <= 1) return;
    int t = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = t;
}
int main(){
    int arr[]={1,2,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);
    rotateleft(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
    }
