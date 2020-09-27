#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *b=new int[n+1];
	    for(int i=1;i<=n;i++){
	        cin>>b[i];
	    }
	    int ans=true;
	    for(int i=1;i<=n;i++){
	        if(i%b[i]!=0){
	            ans=false;
	            break;
	        }
	    }
	    if(ans){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
