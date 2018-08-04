#include <iostream>
using namespace std;
int main() {
	string a;//="aeefeeegeejdjdgdaarwasseeetuiiuuakjdfhuuuuuuuuiuuueeeuuuuusdfzaaa";
	cin>>a;
    long int n=a.length();
    //cout<<n;
    string b[100000];
    long int l=0,i=0,j=0,k=0,c=0;
    long int d=0;
    for(l=1;l<=n;l++)
    {
        for(i=0;i<=n-l;i++){
            j=i+l-1;
            for(k=i;k<=j;k++){
                b[d]+=a[k];
                //cout<<a[k];
            }//cout<<endl;
            //cout<<b[d]<<endl;
            d++;
        }
    }
    for(i=0;i<d;i++){
        //cout<<b[i]<<endl;
    
    if(b[i][0]=='a'||b[i][0]=='e'||b[i][0]=='i'||b[i][0]=='o'||b[i][0]=='u'||b[i][0]=='A'||b[i][0]=='E'||b[i][0]=='I'||b[i][0]=='O'||b[i][0]=='U')
    //cout<<b[i]<<endl;
    c++;}
    cout<< c%10003;
    
    return 0;
}
