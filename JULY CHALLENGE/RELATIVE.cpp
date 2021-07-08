#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, g, c, v;
	
	cin>>t;
	if(t >= 1 && t <= 50000)
	    for(int i=0; i<t; ++i)
	    {
	        cin>>g>>c;
	        v = c*c;
	        if((g >= 1 && g <= 10) && (c >= 1000 && c <= 3000) && (v % (2*g) == 0))
	        {
	            cout<<(int)(v/(2 * g))<<endl;
	        }
	    }
	
	return 0;
}
