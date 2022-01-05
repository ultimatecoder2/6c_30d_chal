/*
Write a program to find 100 largest numbers out of an array of 1 billion numbers
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int max_enteries = 10000000;
    vector<int> v(max_enteries);
    for(int i=0;i<max_enteries;i++){
        cin>>v[i];
    }
    priority_queue<int, vector<int>, greater<int>>min_heap;
    // minheap will store the 10 largest numbers
    for(int i=0;i<max_enteries;i++){
        min_heap.push(v[i]);
        if(min_heap.size()>10){
            min_heap.pop();
        }
    }

    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }

    return 0;
}