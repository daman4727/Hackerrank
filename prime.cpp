#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x=0,f=1;
	cin>>x;
	int i=0;
	int s=sqrt(x);
	for(i=2;i<s;i++)
	{
	    if(x%i==0){
	    f=0;break;}
	   
	}
if(f==0)
cout<<"not prime";
else if(f=1)
cout<<" prime";

}
