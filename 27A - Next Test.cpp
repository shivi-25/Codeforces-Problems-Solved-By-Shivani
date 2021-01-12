#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;++i)
     cin>>a[i];
     sort(a,a+n);
     if(a[0]>1)
     cout<<1;
     else {
     int i=0;
     while(i<n-1 && a[i+1]-a[i]<=1)
     i++;
     cout<<a[i]+1;}
     return 0;
}
