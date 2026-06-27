//Removeduplicates for sorted array
#include <iostream>
using namespace std;
//Duplicate elements ko chhodte jao aur har naye (unique) element ko array mein aage se line se jamate jao.
int remduplicates(int arr[],int n){
    if (n == 0) return 0;
    int res=1;
    for(int i=1; i<n; i++){
        if(arr[i]!= arr[res-1]){
            arr[res] = arr[i];
            res++;
            }}
            return res;
            }
int main() {
    int arr[]={46,46,46,46,43,89,89,2,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=remduplicates(arr,n);
    cout<<"naya size : "<<s<<endl;
    cout<<"modified array : ";
    for(int i=0; i<s;i++){
    cout<< arr[i]<<" " ;}
    return 0;
}
