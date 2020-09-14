#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calcMinOp(int *input,int n){
    sort(input,input+n);
    int uniqueChecker=input[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(input[i]==uniqueChecker){
            continue;
        }
        else{
            count++;
            uniqueChecker=input[i];
        }
    }
    if(input[0]==0){
        return count-1;
    }
    else{
        return count;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *input=new int[n];
	    for(int i=0;i<n;i++){
	        int inputVar;
	        cin>>inputVar;
	        input[i]=inputVar;
	    }
	    int ans=calcMinOp(input,n);
	    cout<<ans<<endl;
	    delete [] input;
	}
	return 0;
}
