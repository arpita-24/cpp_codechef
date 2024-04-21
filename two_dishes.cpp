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
