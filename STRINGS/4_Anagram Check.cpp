#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int CHAR = 256;
//references copy nhi bne
bool isanagram(string &s1,string &s2){

    if(s1.length() != s2.length())
        return false;

    int count[CHAR] = {0};
    /*s1 ke har character ka count +1 badhao aur s2 ke usi position wa
    le character ka count -1 ghatao, taaki match hone par sab counts
     wapas 0 ho jaayein.
    */
    for(int i=0; i<s1.length(); i++){
    count[s1[i]]++;
    count[s2[i]]--;
    }
    /*poore count array (0 se 255) ko check karo ki koi
    bhi character ka count non-zero toh nahi reh gaya,
     agar mila toh anagram nahi hai.*/
    for(int i=0; i<CHAR; i++)
        if(count[i] != 0)
        return false;

        return true;
    }

int main() {
    string str1 = "listen";
    string str2 = "silent";

    cout<<isanagram(str1, str2)<<endl;

    return 0;}

