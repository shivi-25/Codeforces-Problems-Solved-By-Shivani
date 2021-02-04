#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[4]={0};
    cin>>s;
    for(int i=0;i<s.size();++i)
        if(s[i]=='n')
            a[0]++;
        else if(s[i]=='e')
            a[1]++;
        else if(s[i]=='i')
            a[2]++;
        else if(s[i]=='t')
            a[3]++;
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3];
    a[0]-=3;
    a[1]-=3;
    a[2]--;
    a[3]--;
    if(a[0]<0 ||a[1]<0 || a[2]<0 ||a[3]<0)
            return 0;
    int ans=1;
    while(1)
    {
        a[0]-=2;
        a[1]-=3;
        a[2]--;
        a[3]--;
        if(a[0]<0 ||a[1]<0 || a[2]<0 ||a[3]<0)
            break;
       ans++;        
    }
    cout<<ans;
    return 0;
}
