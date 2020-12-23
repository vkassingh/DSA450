//You're given an integer N. Write a program to calculate the sum of all the digits of N.

int main(){
int t,n;
cin>>t;
for (int i=0; i<t;i++){
cin>>n;
while(n>0){
int rem= n%10;
int sum= sum +rem;
n = n/10;
}
cout<<sum<<endl;
}


}
