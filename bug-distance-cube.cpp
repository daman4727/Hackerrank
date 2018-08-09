#include <iostream>

using namespace std;
double round(double var)
{
    
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}
int main() {
    int n=0,d=0,i=0;
    double dis=0.00,pi=3.142;
    cin>>n;
    d=n;n=n*3;
	int xyz[n]={0};
	for(i=0;i<n;i++)
	cin>>xyz[i];
	//for(i=0;i<n;i++)
	//cout<<xyz[i]<<endl;
	//while(1){
	for(i=0;i<=d+1;i=i+d)
	{
	    //if((xyz[i]==xyz[i+d-1]&&xyz[i+1]==xyz[i+d]))
	    
	    if((xyz[i]==xyz[i+d])&&(xyz[i+2]==xyz[i+d+2]))
	dis=dis+((2*pi*(max(xyz[i+1],xyz[i+d+1])-min(xyz[i+1],xyz[i+d+1])))/6);
	if((xyz[i+1]==xyz[i+d+1])&&(xyz[i+2]==xyz[i+d+2]))
		dis=dis+((2*pi*(max(xyz[i],xyz[i+d])-min(xyz[i],xyz[i+d])))/6);
		
		if((xyz[i]==xyz[i+d])||(xyz[i+1]==xyz[i+d+1])||(xyz[i+2]==xyz[i+d+2]))
		{
		    dis=dis+(max(xyz[i+1],xyz[i+d+1])-min(xyz[i+1],xyz[i+d+1]) +max(xyz[i],xyz[i+d])-min(xyz[i],xyz[i+d])+ max(xyz[i+2],xyz[i+d+2])-min(xyz[i+2],xyz[i+d+2]));
		}//cout<<(max(xyz[i+1],xyz[i+d])-min(xyz[i+1],xyz[i+d]) +max(xyz[i],xyz[i+d-1])-min(xyz[i],xyz[i+d-1])+ max(xyz[i+2],xyz[i+d+1])-min(xyz[i+2],xyz[i+d+1]))<<endl;
	
	}		//break;

	cout<<round(dis-1);
}
