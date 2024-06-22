#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    unordered_map<int,int> umap;
	    for(int i=0;i<x;i++){
	        int a,b;
	        cin>>a>>b;
	        if(a<9){
	            umap[a]=max(umap[a],b);
	        }
	    }
	    int s=0;
	    for(auto x: umap){
	        s+=x.second;
	    }
	    cout<<s<<endl;
	}

}
