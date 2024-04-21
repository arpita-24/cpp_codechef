/*  
The Two Dishes
Chef prepared two dishes yesterday. Chef had assigned the tastiness 𝑇1 and T2 to the first and to the second dish respectively. The tastiness of the dishes can be any 
integer between 0 and 𝑁 (both inclusive).
Unfortunately, Chef has forgotten the values of  𝑇1 and T2 that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by 
𝑆.

Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?


Input Format
The first line of input contains a single integer T, denoting the number of testcases. The description of the T testcases follows.
The first and only line of each test case contains two space-separated integers 𝑁, S, denoting the maximum tastiness and the sum of tastiness of the two dishes, respectively.

Output Format
For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.
*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int T;
	cin >> T;
	
	while(T>0)
	{
	    int N,S;
	    cin >> N >> S;
	    int diff = -1, res = 0;
	    
        if(N>S)
        {
            diff = S;
        }
        else if(N==S)
        {
            diff = S;
        }
        else
        {
            res = S - N;
            diff = N - res;
        }
	    
	    cout<< diff << endl;
	    T--;
	}

}
