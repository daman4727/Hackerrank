#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	
		ll n,k;
		scanf("%lld",&n);
		int A[n];
		long long int ans=0;
		for(int i=0;i<n;i++)
		scanf("%lld",&A[i]);
		ll curr=0,l=0;
		for(int i=0;i<n;i++)
		{ll curr=0,l=0;
		    for(int j=i;j<n;j++)
		{
			curr=(curr|A[j]);
			
			{
			
			ans+=curr;}

			}
		}
		printf("%lld\n",ans);
	
	return 0;
}  
