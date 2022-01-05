/*
Given an array of strings, return all groups of strings that are anagrams. 
The groups must be created in order of their appearance in the original array. 
Look at the sample case for clarification.

N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.


*/

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n = string_list.size();
        vector<vector<string>>ans;
        vector<pair<string, int>>sl(n);
        if(n==0) return ans;
        
        for(int i=0;i<n;i++){
            string s = string_list[i];
            sort(s.begin(), s.end());
            sl[i] = make_pair(s, i);
        }
        sort(sl.begin(), sl.end());
        ans.push_back({string_list[sl[0].second]});
        for(int i=1;i<n;i++){
            int ind = ans.size();
            if(sl[i].first==sl[i-1].first){
                ans[ind-1].push_back(string_list[sl[i].second]);
            }else{
                ans.push_back({string_list[sl[i].second]});
            }    
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends