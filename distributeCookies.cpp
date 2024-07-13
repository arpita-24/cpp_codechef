/* 
Distribute Cookies
Chef is making cookies for N kids. He wants to give everyone an equal number of cookies. He must give at least 1 cookie to each kid. 
Chef already has 𝑀 cookies. He can destroy or make 1 cookie in 1 second. Find the minimum time after which he can evenly distribute the cookies between all kids.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of a single line of input.
The first and only line of each test case contains N and M - the number of kids and the initial number of cookies.

Output Format
For each test case, output on a new line the minimum time such that Chef can evenly distribute all his cookies.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T, N, M;
    cin >> T;
    int res;
    while(T--)
    {
        cin >> N >> M;
        if(N==M)
            cout<<0<<endl;
        else if(N>M)
        {
            if(N%M==0)
                cout<< N-M << endl;
            else
                cout<< N-M <<endl;
        }
        else
        {
            if (M%N == 0)
                cout<<0<< endl;
            else
            {
                res = ((N-(M%N))>M%N) ? (M%N) : (N-(M%N)) ;
                cout<< res <<endl;
            }
                
        }
    }
}
