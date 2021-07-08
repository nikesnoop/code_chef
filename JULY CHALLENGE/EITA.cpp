#include <iostream>
using namespace std;

int max(int x, int y)
{
    if(x > y)
        return x;
        
    return y;
}

int main() {
	int t;
	int d, x, y, z;
	cin>>t;
	int a[100][100];
	int s;
	
	for(int i=0; i<t; ++i)
	{
	    cin>>d>>x>>y>>z;
	    s = max(((d * y) + ((7 - d) * z)), (7*x));
	    cout<<s<<endl;
	}
	
	return 0;
}
