//You have rs 1,2,5,10,50,100, notes. You have to find the minimum no of notes for a give amount of money.

int main(){
int t; cin>>t;
for (int i=0; i<t;i++){
int money, note_count=0;
cin>>money<<count;
note_count= note_count+ money/100;
money= money%100;
note_count= note_count+ money/50;
money= money%50;
note_count= note_count+ money/10;
money= money%5;
note_count= note_count+ money/2;
note_count=note_count+money%2;
cout<<note_count<<endl;

}
}
