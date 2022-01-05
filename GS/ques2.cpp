/*
Overlapping rectangles

Given two rectangles, find if the given two rectangles overlap or not. 
A rectangle is denoted by providing the x and y coordinates of two points: 
a) the left top corner and 
b) the right bottom corner of the rectangle. 
Two rectangles sharing a side are considered overlapping. 
(L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).

Note: It may be assumed that the rectangles are parallel to the coordinate axis.


*/

 // { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        int x_top1 = L1[0], y_top1 = L1[1];
        int x_top2 = L2[0], y_top2 = L2[1];
        int x_bottom1 = R1[0], y_bottom1 = R1[1];
        int x_bottom2 = R2[0], y_bottom2 = R2[1];
        int x_min1 = min(x_top1, x_bottom1), x_max1 = max(x_top1, x_bottom1);
        int y_min1 = min(y_top1, y_bottom1), y_max1 = max(y_top1, y_bottom1);
        int x_min2 = min(x_top2, x_bottom2), x_max2 = max(x_top2, x_bottom2);
        int y_min2 = min(y_top2, y_bottom2), y_max2 = max(y_top2, y_bottom2);
        
        if(x_min1>x_max2||x_min2>x_max1||y_min1>y_max2||y_min2>y_max1) return 0;
        return 1;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends