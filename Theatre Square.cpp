#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,m,a,l,w;
    while(cin>>n>>m>>a)
    {
        l=n/a;
        w=m/a;
        if(n%a!=0) l++;
        if(m%a!=0) w++;

        cout<<l*w<<endl;
    }
    return 0;
}
