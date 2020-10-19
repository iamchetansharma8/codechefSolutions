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
	    string input;
	    cin>>input;
	    char find=input[n-1];
	    bool decide=false;
	    for(int i=0;i<n-1;i++){
	        if(input[i]==find){
	            decide=true;
	            break;
	        }
	    }
	    if(decide){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
