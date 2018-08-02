#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
int c1[26]={0},c2=0,c=0;
    for(int i=1;s[i]!='\0';i++)
        if(s[i-1]==s[i])
            c++;
        //c1[s[i]-'a']++;
//for(int i=0;i<26;i++)
//{
    //c=c+c1[i];
    //if(c1[i]>0)
      //  c2++;
//}
    //c=c-c2;
    return c;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
