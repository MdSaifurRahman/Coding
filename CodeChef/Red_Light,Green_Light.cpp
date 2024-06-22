#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,c = 0;
	    cin>>x>>y;
	    int a[x];
	    for(int i=0;i<x;i++){
	        cin>>a[i];
	        if(a[i]>y){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	    
	}

}
