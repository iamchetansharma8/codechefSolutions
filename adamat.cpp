#include <iostream>
using namespace std;
bool checkSorted(int **input,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(input[i][j]!=i*n+(j+1)){
                return false;
            }
        }
    }
    return true;
}
int findL(int **input,int n){
    int rw=input[1][0]-input[0][0];
    int i;
    for(i=0;i<n-1;i++){
        if(input[i+1][0]-input[i][0]!=rw){
            break;
        }
    }
    return i;
}
void takeTranspose(int **input,int l){
    for(int i=0;i<=l;i++){
        for(int j=i;j<=l;j++){
            if(i==j){
                continue;
            }
            int swapVar=input[i][j];
            input[i][j]=input[j][i];
            input[j][i]=swapVar;
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
	    int **input=new int* [n];
	    for(int i=0;i<n;i++){
	        input[i]=new int[n];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            int tempInput;
	            cin>>tempInput;
	            input[i][j]=tempInput;
	        }
	    }
	    int count=0;
	    bool isSorted=checkSorted(input,n);
	    while(!isSorted){
	        int l=findL(input,n);
	        takeTranspose(input,l);
	        isSorted=checkSorted(input,n);
	        count++;
	    }
	    cout<<count<<endl;
	    for(int i=0;i<n;i++){
	        delete [] input[i];
	    }
	    delete [] input;
	}
	return 0;
}
