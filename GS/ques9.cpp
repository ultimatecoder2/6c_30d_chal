#include<bits/stdc++.h>
using namespace std;

string getMinSeq(string s){
    stack<int> st;
    string ans;
	for(int i=0;i<=s.length();i++){ 
		st.push(i+1); 
		
		if(s.length()==i || s[i]=='I' ){ 
			while(!st.empty()){ 
				ans+=st.top()-'0';
				st.pop();
			}
		}
	}
	return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<getMinSeq(s)<<endl;
    return 0;
}