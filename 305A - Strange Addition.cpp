#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    vector<int>o;
    vector<int>t;
    vector<int>b;
    vector<int>ans;
    int h=0, z=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==100)
           h=1;
        else if(a[i]==0)
            {ans.push_back(a[i]);
              z=1;
            }
        else if(a[i]%10 == 0)
           t.push_back(a[i]);
        else if(a[i]>0 && a[i]<10)
          o.push_back(a[i]);
          else if(a[i]>10 && a[i]<100)
          b.push_back(a[i]);
    }
    if(h==1)
      ans.push_back(100);
    if(t.size()>0)
       ans.push_back(t[0]);
    if(o.size()>0)
       ans.push_back(o[0]);
    if(o.size()==0 && t.size()==0 && b.size()>0)
       ans.push_back(b[0]);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i)
    cout<<ans[i]<<" ";
    return 0;
}
