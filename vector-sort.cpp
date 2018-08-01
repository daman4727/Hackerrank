#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=0,k=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    { cin>>k;
     a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}
