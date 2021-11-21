#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    (a+b)%2==1?cout<<"Alice\n":cout<<"Bob\n";
	}
	return 0;
}
