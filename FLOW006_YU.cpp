#include <iostream>
using namespace std;

int main() {
	int t, a;
	cin>>t;
	int s[t] = {0,0,0};
	
	for(int i=0; i<t; ++i)
	{
	    cin>>a;
	    while(a>0)
	    {
	        s[i] += a%10;
	        a /= 10;
	    }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<s[i]<<endl;
	}
	
	return 0;
}
