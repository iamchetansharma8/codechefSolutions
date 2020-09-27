#include <iostream>
using namespace std;
int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *input=new int[n+1];
	    int sum=0;
	    for(int i=1;i<=n;i++){
	        cin>>input[i];
	        sum+=input[i];
	    }
	if(sum<0){
	    cout<<"NO"<<endl;
	}
	if(sum>=0){
	     cout<<"YES"<<endl;
	}
}
return 0;
}