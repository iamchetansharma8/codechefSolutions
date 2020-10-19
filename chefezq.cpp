#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    int *input=new int[n+1];
	    for(ll i=1;i<=n;i++){
	        cin>>input[i];
	    }
	    ll totQ=0;
	    ll j;
	    for(j=1;j<=n;j++){
	        totQ+=input[j];
	        if(totQ<k){
	            cout<<j<<endl;
	            break;
	        }
	        else{
	            totQ-=k;
	        }
	    }
	    if(j>n){
	        j+=(totQ/k);
	        cout<<j<<endl;
	    }
	}
	return 0;
}
