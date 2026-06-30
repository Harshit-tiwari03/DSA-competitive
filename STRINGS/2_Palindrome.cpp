#include<iostream>
#include <string>
using namespace std;

bool isPal(string str){
    int l=0;
    int h=str.length()-1;

    while(l<h){
        if(str[l] != str[h])
            return false;

        l++;
        h--;
    }
    return true;
    }
int main(){
    string str="racecar";
    cout<<isPal(str);
    return 0;
    }
