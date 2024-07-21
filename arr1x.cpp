#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int arrheigh(int arr[],int n){
/*	if (n==0&&n==1)

  return 0;	

if(arr[0]>arr[1])

return 0;*/
if(n==1)
return 0;
if (arr[0]>=arr[1])
return 0;
if (arr[n-1]>=arr[n-2])
return n-1;



for( int i=1;i<n-1;i++){

if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
	return i;

}
}

int main(){
	
 int arr[5]={7,9,4,3,2};
	 int n=sizeof(arr)/sizeof(arr[0]);
	cout<<arrheigh(arr,n)<<"\t"<<"the peak value"<<endl;

	return 0;
}