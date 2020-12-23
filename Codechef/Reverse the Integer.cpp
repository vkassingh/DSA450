//Given an Integer N, write a program to reverse it.

int main(){
int t,n;
cin>>t;
int rev=0;
for(int i =0; i<t; i++){
cin>>n;

while(n>0){
int rem= n%10;
rev= rev*10+rem;
n=n/10;
}

cout<<rev<<endl;
}
}
