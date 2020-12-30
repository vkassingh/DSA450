int main(){
int t,a,b,g, l;
cin>>t;
for(int i=0; i<t; i++){
cin>>a>>b;
p=a; q=b;
while(q!=0){ t=q; q=p%q;  p=t; }
}
g=p;
l= (a*b)/g ;

cout<<g<<endl;
cout<<l<<endl;
}
