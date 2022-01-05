/*
1071. Greatest Common Divisor of Strings
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.


*/

#include<bits/stdc++.h>
using namespace std;

bool check(string &t,int k, string &h){
    int i=0,j=0;
    while(i<t.length()){
        if(t[i]!=h[j%k]){
            return false;
        }
        i++;j++;
    }
    return true;
}

string gcdOfStrings(string s, string t) {
    int n = s.length(), m = t.length();
    int k = __gcd(n,m);
    if(check(s,k,t) && check(t,k,t)){
        return t.substr(0,k);
    }
    return "";
}


int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;



    return 0;
}