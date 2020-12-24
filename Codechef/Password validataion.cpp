//Today your task is to implement password validation program.


It should meet the following conditions:

Length is atleast 5 characters.
At least one Large English letter.
At least one small English letter.
It should contain at least one digit.

You are given a password. Check whether password satisfies all the conditions.


int main(){
string a cin>>a;
if(a.length<5){cout<<"NO"<<endl;}
else{
    int c=0,s=0,d=0;
    for (int j=0; j<a.length;j++){
    if (a[j]>='a' && a[j]<='z') s=1;
    else if (a[j]>='A' && a[j]<='Z') c=1;
    else if (a[j]>='0' && a[j]<='9') d=1;
    }
    if(s==1 && c==1 && d==1){cout<<"YES"<<endl;}
    else {cout<<<<"NO"<<endl;}
    }
}



















