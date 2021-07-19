#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s1,s2,s0;
	    cin>>s0>>s1>>s2;
	    int sum = s0;
	    int x = min(s1,s2);
	    int y = max(s1,s2);
	    sum = sum + x +((y-x)/3);
	    cout<<sum<<"\n";
	}
	return 0;
}
