#include<iostream>
using namespace std;
//Naive
//"Har ek element (arr[i]) ko baaki saare elements (arr[j]) se compare karo; jo kisi se chota nahi mila, wahi largest hai
//O(n2)
int getlargest(int arr[],int n){
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
                if(arr[j]>arr[i]){
                    flag=false;
                    break;
                    }}
                if(flag==true)
                    return arr[i];
    }
    return -1;}
int main(){
    /*int arr[]={2,1,7,4};
    int n=sizeof(arr) / sizeof(arr[0]);
    cout<<getlargest(arr,n);*/
    int n;
    cout<<"Enter no of ele :";
    cin>>n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];}
        cout << "Largest element is: " << getlargest(arr, n);
    return 0;
}
