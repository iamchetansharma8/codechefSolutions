#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    if(ceil(log2(n)) == floor(log2(n))){
	        cout<<-1<<endl;
	        continue;
	    }
	    if(n==3){
	        cout<<1<<" "<<3<<" "<<2<<endl;
	    }
	    else{
	        cout<<2<<" "<<3<<" "<<1<<" ";
	        int i=4;
	        while(i<=n){
	            if(ceil(log2(i)) == floor(log2(i))){
	                cout<<i+1<<" ";
	                cout<<i<<" ";
	                i+=2;
	            }
	            if(i>n){
	                break;
	            }
	            cout<<i<<" ";
	            i++;
	        }
	    }
	}
	return 0;
}
