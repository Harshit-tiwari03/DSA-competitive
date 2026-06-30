#include <iostream>
#include <string>
using namespace std;
// in order
// not compulsory to continuous like substring
bool isSub(string s1, string s2, int n, int m){
    int j = 0;
    for(int i = 0; i < n && j < m; i++){

        if(s1[i] == s2[j])
            j++;
    }
    return (j == m);
}

int main(){
    string str1 = "RACECAR";
    string str2 = "CAR";
    int n = str1.length();
    int m = str2.length();

    cout << isSub(str1, str2, n, m) << endl;

    return 0;
}
