#include<bits/stdc++.h>
using namespace std;
bool check(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if(x1==x2 && y1==y2)
    return false;
    if(x1==x3 && y1==y3)
    return false;
    if(x3==x2 && y3==y2)
    return false;
    int d1,d2,d3;
    d1=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    d2=(x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
    d3=(x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
    if(d1>d3)
    swap(d1,d3);
    if(d2>d3)
    swap(d2,d3);
    if(d1+d2 == d3)
       return true;
    return false;   
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(check(x1,y1,x2,y2,x3,y3))
    cout<<"RIGHT";
    else if(check(x1+1,y1,x2,y2,x3,y3) || check(x1-1,y1,x2,y2,x3,y3) || check(x1,y1+1,x2,y2,x3,y3) ||check(x1,y1-1,x2,y2,x3,y3))
          cout<<"ALMOST";
    else if(check(x1,y1,x2+1,y2,x3,y3) || check(x1,y1,x2-1,y2,x3,y3) || check(x1,y1,x2,y2+1,x3,y3) || check(x1,y1,x2,y2-1,x3,y3))          
           cout<<"ALMOST";
    else if(check(x1,y1,x2,y2,x3+1,y3) || check(x1,y1,x2,y2,x3-1,y3) || check(x1,y1,x2,y2,x3,y3+1) || check(x1,y1,x2,y2,x3,y3-1))
           cout<<"ALMOST";
    else  cout<<"NEITHER";
    
    return 0;
}
