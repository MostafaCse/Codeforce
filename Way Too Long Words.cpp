#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        len=0;
        cin>>s;
        len=s.size();
        if(len<=10)
            cout<<s<<endl;
        else
        cout<<s[0]<<len<<s[len-1]<<endl;
    }
    return 0;
}
