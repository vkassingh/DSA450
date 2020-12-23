//conditionals + logical or 

int main(){
int t; cin<<t;
for (int i=0; i<t; i++){
char c; cin>>c;
if (c=='b' || c=='B'){cout<<"BattleShip"<<endl;}
elseif(c=='c' || c=='C'){cout<<"Cruiser"<<endl;}
elseif(c=='d' || c=='D'){cout<<"Destroyer"<<endl;}
else{cout<<"Frigate"<<endl;}

}
}
