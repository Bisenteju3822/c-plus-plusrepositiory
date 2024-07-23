#include<iostream>
using namespace std;
void revarr(int arr[],int x){
	int revxArr[x];
	for(int p=0;p<x;p++){
		 revxArr[p]=arr[x-p-1];
		
		cout<<revxArr[p]<<endl;
	}

		}


int main(){
int carr[6]={2,3,4,5,6,8};
 int n=sizeof (carr)/sizeof (carr[0]);
 
revarr(carr,n);

}
