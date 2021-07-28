#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,r=0;
	    for(int i=0;i<3;i++){
	        cin>>a;
	        if(a==0)
	        r++;
	    }
	    if(r<=2 && r>0)
	    cout<<1<<"\n";
	    else
	    cout<<0<<"\n";
	}
	return 0;
}
