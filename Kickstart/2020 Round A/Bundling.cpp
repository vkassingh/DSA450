#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl \n"
#define int long long

const int N = 1e5+ 5;
typedef struct data
{
data* bit[26];
int cnt=0;
} trie;

trie* head;

void insert( string &s)   //pass string with call by reference(&s)
{ 
  trie* curr_node= head_node;
  for(auto & it:s)
  {
  int b= it-'A';
  if(!curr_node-> bit[b])
           curr_node-> bit[b]= new trie();
            curr_node=  curr_node-> bit[b];
             curr_node= cnt++;
  }
}

int n,k; 
string s[N];
int query(trie*  curr_node, int lvl)
{
if(! curr_node)
return 0;
int ans= ( curr_node-> cnt/k);
for(int i=0; i<=25; i++)
   if( curr_node->bit[i])
    ans+= query( curr_node->bit[i], lvl+1);
    return ans;
}

int32_t main()
{
IOS; int t; cin>>t;
int tc=0;
while(t--)
{
head_node= new trie();
tc++;
cin>>n>>k;
for(int i=0; i<n; i++)
{
cin>>s[i]; 
insert(s[i]);
}

int ans= query(head, 0);
cout<< " Case # " << tc << ": "<< ans <<endl;


}
return 0;
}


Credit: Ashish Gupta

















}
