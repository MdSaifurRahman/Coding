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
	        int j;
	        cin>>j;
	        umap[j]++;
	    }
	    int m = 0;
	    for(auto x: umap){
	        m = max(m,x.second);
	    }
	    cout<<(x-m)<<endl;
	}

}
