/*
Distributing M items in a circle of size N starting from K-th position

*/
#include<bits/stdc++.h>
using namespace std;

int getLastItem(int n, int m, int k){
    if(m<=n-k+1){
        return k+m-1;
    }
    else{
        m-=(n-k+1);
        return (m%n ==0)? n:m%n;
    }
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    cout<<getLastItem(n,m,k)<<endl;
    return 0;
}