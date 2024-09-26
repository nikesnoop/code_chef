#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    n%2==0?cout<<n<<"\n":cout<<n-1<<"\n";
	}
	return 0;
}
