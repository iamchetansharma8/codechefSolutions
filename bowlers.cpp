#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    if(k*l<n){
	        cout<<-1<<endl;
	        continue;
	    }
	    int *ans=new int[n+1];
	    int *oversDone=new int[k+1];
	    for(int i=1;i<=n;i++){
	        ans[i]=-1;
	    }
	    for(int i=1;i<=k;i++){
	        oversDone[i]=0;
	    }
	    int i,check=1;
	    for(i=1;i<=n;i++){
	        if(check>k){
	            if(oversDone[1]>=l||ans[i-1]==1){
	                cout<<-1<<endl;
	                break;
	            }
	            check=2;
	            ans[i]=1;
	            oversDone[1]++;
	        }
	        else{
	            ans[i]=check;
	            oversDone[check]=oversDone[check]+1;
	            check++;
	        }
	    }
	    if(i!=n+1){
	        continue;
	    }
	    else{
	        for(int a=1;a<=n;a++){
	            cout<<ans[a]<<" ";
	        }
	        cout<<endl;
	    }
	    delete [] ans;
	    delete [] oversDone;
	}
	return 0;
}
