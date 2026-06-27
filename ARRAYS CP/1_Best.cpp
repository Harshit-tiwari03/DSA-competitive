#include<iostream>
using namespace std;
//ele ka index aayega
// arr ke har element ko compare kr > agar > mile to res me dalde end me return res krde
int getlargest(int arr[],int n){
int res=0;
for(int i=1; i<n; i++)
       if(arr[i] > arr[res])
        res=i;
        return res;}

int main(){
    int arr[]={5,8,20,10};
    int n=sizeof(arr) / sizeof(arr[0]);
    int s=getlargest(arr,n);
    cout<<"element at index:"<< " " <<s<<" which is "<< " "<<arr[getlargest(arr, n)];
    return 0;
    }
