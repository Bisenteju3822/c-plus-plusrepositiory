#include <iostream>
#include <string>
using namespace std;

int main() {
	string one , two;

cin>>one;
cin>>two;

cout<<one.size()<<" "<<two.size()<<endl;
cout<<one+two<<endl;

char temp = one[0];
one[0] = two[0];
two[0] = temp;

cout<<one<<" "<<two<<endl; 
return 0;
}
