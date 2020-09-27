#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    unordered_set<int> s;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n-1;i++){
	        int a,b;
	        cin>>a>>b;
	        if(s.find(b)==s.end()){
	            s.insert(b);
	        }
	        else{
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
