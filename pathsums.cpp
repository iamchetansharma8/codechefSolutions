#include <iostream>
#define ll long long
#include<queue>
#define pb push
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int **input=new int*[n+1];
	    for(int i=0;i<=n;i++){
	        input[i]=new int[n+1];
	    }
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n;j++){
	            input[i][j]=0;
	        }
	    }
	    for(int i=1;i<n;i++){
	        int u,v;
	        cin>>u>>v;
	        input[u][v]=1;
	        input[v][u]=1;
	    }
	    int *ans=new int[n+1];
	    for(int i=1;i<=n;i++){
	        ans[i]=0;
	    }
	    queue<int> q;
	    q.pb(1);
	    ans[1]=4;
	    while(!q.empty()){
	        int f=q.front();
	        q.pop();
	        for(int i=1;i<=n;i++){
	            if(f==i){
	                continue;
	            }
	            if(ans[i]!=0){
	                continue;
	            }
	            if(input[f][i]==1){
	                if(ans[f]==4){
	                    ans[i]=5;
	                }
	                else{
	                    ans[i]=4;
	                }
	                q.pb(i);
	            }
	        }
	    }
	    for(int i=1;i<=n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
