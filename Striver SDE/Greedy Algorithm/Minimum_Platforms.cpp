class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i=0,j=0,cnt=0,m=0;
    	while(i<n){
    	    if(arr[i]<=dep[j]){
    	        cnt++;
    	        i++;
    	    }
    	    else{
    	        cnt--;
    	        j++;
    	    }
    	    m = max(m,cnt);
    	}
    	return m;
    }
};
