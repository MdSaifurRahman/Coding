#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,ans,d=0,x=0,y=0;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    x+=a;
	    y+=b;
	    if (x>y){
	        if(x-y>d){
	            d=x-y;
	            ans = 1;
	        }
	    }
	    else{
	        if(y-x>d){
	            d= y-x;
	            ans = 2;
	        }
	    }
	}
	cout<<ans<<" "<<d;

}
