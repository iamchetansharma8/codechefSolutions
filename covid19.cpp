#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void findPos(set<int> &s,int n,ld **tim,int i,ld ctim){
    for(int j=0;j<n;j++){
        if(tim[i][j]>ctim){
            s.insert(j);
            findPos(s,n,tim,j,tim[i][j]);
        }
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
	        cin>>input[i];
	    }
	    ld **tim=new ld*[n];
	    for(int i=0;i<n;i++){
	        tim[i]=new ld[n];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i==j){
	                tim[i][j]=-1;
	                continue;
	            }
	            if(input[i]==input[j]){
	                tim[i][j]=-1;
	                continue;
	            }
	            ld tempt=((ld)(j-i))/(input[i]-input[j]);
	            if(tempt<0){
	                tim[i][j]=-1;
	            }
	            else{
	                tim[i][j]=tempt;
	            }
	        }
	    }
	    int min=6,max=0;
	    for(int i=0;i<n;i++){
	        set<int> s;
	        s.insert(i);
	        findPos(s,n,tim,i,0);
	        if(s.size()>max){
	            max=s.size();
	        }
	        if(s.size()<min){
	            min=s.size();
	        }
	        s.clear();
	    }
	    cout<<min<<" "<<max<<endl;
	    for(int i=0;i<n;i++){
	        delete [] tim[i];
	    }
	    delete [] tim;
	}
	return 0;
}
