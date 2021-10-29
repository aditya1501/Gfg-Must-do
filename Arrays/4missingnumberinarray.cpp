#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    int n;
	    cin>>n;
	    vector<int>A;
	    for(int i=0;i<n-1;i++)
	    {
	        int x;
	        cin>>x;
	        A.push_back(x);
	    }
	    int reqSum=(n*(n+1))/2;
	    int preSum=0;
	    for(int i=0;i<n-1;i++)
	    {
	        preSum+=A[i];
	    }
	    int missingNumber=reqSum-preSum;
	    cout<<missingNumber;
	    cout<<endl;
	}
	return 0;
}