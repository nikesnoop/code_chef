#include <iostream>
using namespace std;

int main() 
{
	int t, n, s=0;
	cin>>t;
	int a[100000] = {0};
	
	while(t--)
	{
	    cin>>n;
	    a[n] ++;
	}
	for(int i=0; i<100000; ++i)
	{
	    while(a[i] > 0)
	    {
	        cout<<i<<endl;
	        a[i]--;
	    }
	}
}
