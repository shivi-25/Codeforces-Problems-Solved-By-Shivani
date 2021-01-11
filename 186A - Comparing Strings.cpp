#include <bits/stdc++.h>
using namespace std;
int main() {
     string a,b;
     cin>>a>>b;
     if(a.size()!=b.size())
     {
         cout<<"NO";
         return 0;
     }
     int c=0, f=0, x,y;
     for(int i=0;i<a.size();i++)
     if(a[i]!=b[i])
     {
         c++;
         if(c==1)
         {
             x=a[i];
             y=b[i];
         }
         else if(c==2)
         {
             if(x==b[i]&&y==a[i])
               f=1;
         }
         else break;
     }
     if(f==1 && c==2)
     cout<<"YES";
     else cout<<"NO";
     return 0;
}
