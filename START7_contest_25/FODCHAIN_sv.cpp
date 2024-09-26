#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int e,k;
	    cin>>e>>k;
	    int f=1,s=0;
	    while(f!=0){
	        f = floor(e/k);
	        e=f;
	        s++;
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
