#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    if(x==y){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    int i=(x+k)%n;
	    while(i!=x){
	        if(i==y){
	            cout<<"YES"<<endl;
	            break;
	        }
	        i=(i+k)%n;
	}
	if(i==x){
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
