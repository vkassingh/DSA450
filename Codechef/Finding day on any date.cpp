//According to Gregorian Calendar, it was Monday on the date 01/01/2001. If any year is input,
Write a program to display what is the day on the 1st January of this year.

int main(){
int t; cin>>t;
string mod[7]={"monday", "tuesday","wednesday", "thurday", "friday", "saturday", "sunday"};
while(t--){
int year; cin>>year;
year =year+ (year-1)/4+ (year-1)/100+ (year-1)/400;
year=year%7;
cout<<mod[(year+6)%7]<<endl;

}
}
