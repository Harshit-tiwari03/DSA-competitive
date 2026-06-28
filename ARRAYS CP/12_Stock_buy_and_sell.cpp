#include<iostream>
using namespace std;

int maxProfit(int price[],int n){
    int profit=0;
    for(int i=1; i<n; i++)
        if(price[i] > price[i-1])
        profit += (price[i]-price[i-1]);
    return profit;

    }

int main(){

    int price[]={2,8,1,5,7,12,1,25};
    int n=sizeof(price)/sizeof(price[0]);
    cout<<maxProfit(price,n);

        return 0;
    }
