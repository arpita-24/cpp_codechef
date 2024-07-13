/* Television Channels
You have a television which had X working channels numbered 1,2,...,X. Unfortunately, due to a recent change, all even-numbered channels stopped working.

For example if X=5, channels numbered 2 and 4 have stopped working, while channels numbered 1, 3 and 5 are still working.

Given X, can you tell how many channels are still working?

Input Format
The first and only line of input contains a single integer X.

Output Format
Output the number of working channels. */

#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main() 
{
	int X;
	cin>>X;
	
	if(X%2==0)
	    cout << X/2;
	else
	    cout << (X/2) + 1;

}
