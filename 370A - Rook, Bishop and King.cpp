#include <bits/stdc++.h>
using namespace std;
int main() {
     int r1,c1,r2,c2;
     cin>>r1>>c1>>r2>>c2;
     int a=0,b=0,c=0;
     if(r1==r2 || c1==c2)
        a=1;
     else a=2;
     if((r1+c1)%2 == (r2+c2)%2)
     {
         if((r1-c1 == r2-c2) || (r1+c1 == r2+c2))
            b=1;
         else b=2;        
     }
     c=max(abs(r1-r2), abs(c1-c2));                  
     cout<<a<<" "<<b<<" "<<c;
     return 0;
}
