#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	if(1<=t && t<=1100){
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int s=a+b;
	    if(1<=a && a<=100 && 0<=b && b<=10){
	        if(s<3)
	            cout<<1<<"\n";
	        else if(3<=s && s<=10)
	            cout<<2<<"\n";
	        else if(11<=s && s<=60)
	            cout<<3<<"\n";
	        else
	            cout<<4<<"\n";
	}
	}}
	return 0;
}
