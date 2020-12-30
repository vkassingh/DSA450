//Reverse an array in c++

IP: {1,2,3}
OP: {3,2,1}

The recommended way to solve this problem is to use the reverse() method of algorithm header file.
REVERSING ARRAY UISNG STL C++
//syntax
reverse(start_index , last_index)

#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> a = {1,2,3,4};
cout<<"vector: ";
for(int i=0; i<a.size(); i++) cout<<a[i]<<""<<endl;
reverse(a.begin(), a.end());
for(int i=0; i<a.size();i++) cout<<a[i]<<endl;
return 0;
}
