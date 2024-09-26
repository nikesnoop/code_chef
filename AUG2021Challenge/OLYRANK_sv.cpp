#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[6],s1=0,s2=0;
	    for(int i=0;i<6;i++){
	        cin>>a[i];
	        if(i<3)
	        s1=s1+a[i];
	        else
	        s2=s2+a[i];
	    }
	    if(s1>s2)
	    cout<<1<<"\n";
	    else
	    cout<<2<<"\n";
	}
	return 0;
}
