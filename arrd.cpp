#include<iostream>
using namespace std;
int main(){
int arr[5]={2,9,4,5,1};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
	if(arr[i]<arr[i+1]){
	
		arr[i]=arr[i+1];
		cout<<arr[i]<<endl;
	}
}
return 0;
//	cout<<arr[i]<<endl;
}