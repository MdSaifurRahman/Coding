#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    unordered_map<int, int> umap;
	    for(int i=0;i<x;i++){
	        int j;
	        cin>>j;
	        umap[j]++;
	    }
	    for(auto x: umap){
	        if((x.second%2)!=0){
	            cout<<x.first<<endl;
	        }
	    }
	}

}
