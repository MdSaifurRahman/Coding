#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,j=0,m=0;
	    cin>>x;
	    unordered_map<int,int> umap;
	    for(int i=0;i<x;i++){
	        int k;
	        cin>>k;
	        umap[k]++;
	        if(umap[k]%2!=0){
	            j++;
	        }
	        else{
	            j--;
	        }
	        m = max(j,m);
	    }
	    cout<<m<<endl;
	}

}
