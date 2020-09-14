#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int ans=pow(10,9)+1;
	    for(int i=0;i<n;i++){
	        int current;
	        cin>>current;
	        if(k==current){
	            cout<<"current"<<endl;
	            break;
	        }
	        if(k<current||k%current!=0){
	            continue;
	        }
	        if((k/current)<ans){
	            ans=current;
	        }
	    }
	    if(ans==(1+pow(10,9))){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
