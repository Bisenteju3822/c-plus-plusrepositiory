#include<iostream>
using namespace std;
 int reverse(char arr[],int n){
	
 int e=0;
  int	v=n;
	if(e==v){
		swap(arr[e++],arr[v--]);
		return 1;
		
	}
	else{
		return 0;
	}
}
int main(){
char arr[20]={"teju"};
 int n=arr[-1];
 cout<<"if pallandrom are not"<<reverse(arr,n);
 cout<<arr<<endl;

	return 0;
}