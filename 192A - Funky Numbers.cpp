#include<bits/stdc++.h>
using namespace std;
bool binarysearch(vector<int>v, int x)
{
    int l=0, h=v.size()-1, m;
    if(v[l]==x || v[h]==x)
    return true;
    while(l<=h)
    {
       m=(l+h)/2;
       if(x > v[m])
           l=m+1;
       else if(x < v[m])
           h=m-1;
       else return true;       
    }
    return false;
}
int main()
{
    vector<int>s;
    int i=1,n,y,f=0;
    cin>>y;
    n=i*(i+1);
    n=n/2;
    s.push_back(n);
    i++;
    while(1)
    {
        n=i*(i+1)/2;
        s.push_back(n);
        if(n>1000000000)
           break;
        i++;
    }
    
    for(int j=0;s[j]<=y/2;++j)
    {
           if(binarysearch(s, y-s[j]))
           {f=1;
           break;}
    }
    if(f==1)
    cout<<"YES";
    else cout<<"NO";
    return 0;
}
