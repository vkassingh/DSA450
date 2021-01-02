//Problem
//There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend. 
//What is the maximum number of houses you can buy?

#include <bits/stdc++.h>
uisng namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N= 1e5+5;
int n,b; 
int a[N];
int ans=0;

int32_t main()
{ IOS; 
 int t; cin>>t;
 int tc=0; 
while(t--)
{ tc++; cin>>a>>b; 
 for(int i=0;  i<n;i++) cin>>a[i]; 
 sort(a+1, a+n+1);
 ans=0;
for(int i=0; i<n; i++)
 { if(a[i]<=b)
  { ans++;
    b= b-a[i];
  }
 }
 cout<<"Case #"<<tc<<""<<endl; }
 return 0;
  }


