#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,m,k;
     cin>>n>>m>>k;
     int a[n];
     for(int i=0;i<n;++i)
     cin>>a[i];
     sort(a,a+n);
     int c=k,i=n-1,ans=0;
     if(k>=m)
     cout<<0;
     else {while(i>=0)
     {
       c+=a[i]-1;
       ans++;
       i--;
       if(c>=m)
          break;
     }
     if(c>=m)
     cout<<ans;
     else cout<<-1;
     }
     return 0;
}
