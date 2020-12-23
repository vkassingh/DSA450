//https://www.codechef.com/problems/FLOW009

#include <iostream>
#include <iomanip>

int main(){
int t,q,p; cin>>t;
for (int i=0; i<t;i++){
cin>q>>p;
if(p>1000){
int expenses= (p*q) -0.1*(p*q);

}
else{
 expenses= (p*q);
cout<<setiosflags(ios::fixed)<<setprecision(6)<<expenses<<endl;
//12000.000000

}
}
}

/*
int main(){
int t; cin>> t;
while(t--){
double q,p;
cin>>q>>p; 
if(q>1000){
int expenses= (p*q)- 0.1(p*q);
}
else{
expenses= p*q;
cout<<setiosflags(ios::fixed)<<setprecision(6)<<expenses<<endl;
}
}
}



*/
