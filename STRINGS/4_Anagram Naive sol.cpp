#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isanagram(string s1,string s2){

    if(s1.length() != s2.length())
        return false;

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
            return (s1 == s2);

    }

int main(){

    string str1="listen";
    string str2="silent";
    cout<<isanagram(str1,str2);

    return 0;
    }
