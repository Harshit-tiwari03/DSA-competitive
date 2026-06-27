#include <iostream>
// pehele tough question
using namespace std;
//Loop se non-zero elements ko sequence mein aage wale index se swap karte jao aur bache huye zeroes apne aap end mein shift ho jayenge
void movezeroes(int arr[],int n){

int count =0;
for(int i=0; i<n; i++){
    if(arr[i] != 0){
        swap(arr[i],arr[count]);
        count++;
    }
    }
    for(int i=0; i<n;i++){
    cout<< arr[i]<<" " ;}}
int main() {
    int arr[]={17,0,19,0,0,1,23,1,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    movezeroes(arr,n);
    cout<<"Array se zero end me jane ke bd"<<endl;
    return 0;
}
