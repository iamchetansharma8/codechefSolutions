#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int count1,count2;
	    if(a%9==0){
	        count1=a/9;
	    }
	    else{
	        count1=a/9+1;
	    }
	    if(b%9==0){
	        count2=b/9;
	    }
	    else{
	        count2=b/9+1;
	    }
	    if(count1<count2){
	        cout<<0<<" "<<count1<<endl;
	    }
	    else{
	        cout<<1<<" "<<count2<<endl;
	    }
	}
	return 0;
}
