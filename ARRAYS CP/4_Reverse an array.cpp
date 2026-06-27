#include <iostream>
using namespace std;
// C++ mein aap void ko cout ke sath directly print nahi kar sakte.
void reverse(int arr[],int n){
    //low = l high =h
    int l=0,h=n-1;
    while(l<h){ // indx dekh rha h ele nhi
            //swap
        int t = arr[l];
        arr[l]=arr[h];
        arr[h] = t;
        l++;
        h--;
    }
    // index bdh rhe hain value bdhao bhale hee aage puche hon jaye
    cout << "Reversed array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;}
int main() {
    int arr[]={3,6,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);


    return 0;
}
