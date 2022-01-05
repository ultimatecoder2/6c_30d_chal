#include<bits/stdc++.h>
using namespace std;

int countDecoding(string digits, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
    if (digits[0] == '0')
        return 0;

    int count = 0; 

    
    if (digits[n - 1] > '0')
        count = countDecoding(digits, n - 1);

    
    if (digits[n - 2] == '1'
        || (digits[n - 2] == '2' 
        && digits[n - 1] < '7'))
        count += countDecoding(digits, n - 2);

    return count;
}
int main(){
	string str;
	cin >> str;
    int n = str.length();
	int ans =countDecoding(str, n);
	cout << ans << "\n";
	return 0;
}  