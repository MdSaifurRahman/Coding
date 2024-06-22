#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<int> mat;
	    for(int i=0;i<x;i++){
	        int y;
	        cin>>y;
	        mat.push_back(y);
	    }
	    int s = 0;
	    sort(mat.begin(),mat.end());
	    while(mat.size()>1){
	        s+=mat.back();
	        mat.pop_back();
	    }
	    cout<<s<<endl;
	}

}
