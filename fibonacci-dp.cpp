#include <iostream>

using namespace std;

int fibo(int n)
{
    int memo[n+1]={0};
    memo[1]=1;
    memo[2]=1;
    if(memo[n]>0)
    return memo[n];
    else 
    {
        memo[n]=fibo(n-1)+fibo(n-2);
        return memo[n];
    }
    
}

int main() {
int n=0;
cin>>n;
cout<<fibo(n);
}
