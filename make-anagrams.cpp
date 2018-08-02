#include <bits/stdc++.h>

using namespace std;
int CHARS=26;
// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int c=0;
int c1[CHARS]={0},c2[CHARS]={0};
    for(int i=0;a[i]!='\0';i++)
        c1[a[i]-'a']++;
     for(int i=0;b[i]!='\0';i++)
        c2[b[i]-'a']++;
     for(int i=0;i<26;i++)
         if(c1[i]!=c2[i])
            if(c1[i]>c2[i])
                c=c+(c1[i]-c2[i]);
    else
        
                c=c+(c2[i]-c1[i]);
    return c;
        

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
