#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll findX(long double n){
    return (-2.0+sqrt(4.0+8*(n*n+n)))/4.0;
}
ll nc2(ll a){
    return (a*(a-1))/2;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll sum=(n*(n+1))/2;
	    if(sum&1){
	        cout<<0<<endl;
	    }
	    else{
	        ll x=findX(n);
	        ll ans=n-x;
	        if((sum/2)==((x*(x+1))/2)){
	            ans+=nc2(x)+nc2(n-x);
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
