#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int>v = {2,4,6,9,10};
  v.push_back(20);
  cout<<"no. of element in vector v "<<v.size()<<endl;	

   
   //enhanced for loop named for each loop
   
   for(int i:v)
   {
   	cout<<i<<"\t";
	}
	cout<<endl;
	
	for(auto j=v.begin();j!=v.end();j++)
	{
		cout<<*j<<"\t";
	}
	cout<<endl;
	v.push_back(10);
	v.push_back(90);
		
	for(auto j=v.begin();j!=v.end();j++)
	{
		cout<<*j<<"\t";
	}
	cout<<endl;
}
