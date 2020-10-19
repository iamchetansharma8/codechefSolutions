#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll l,r;
	    cin>>l>>r;
	    if(l==1){
	        cout<<-1<<endl;
	        continue;
	    }
	    if(r>=2*l){
	        cout<<-1<<endl;
	        continue;
	    }
	    if(r<2*l){
	        cout<<r<<endl;
	        continue;
	    }
	    
	}
	return 0;
}
