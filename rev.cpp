#include<iostream>
using namespace std;
 void reverse(char tej[],int n){
 	 int 	e=0;
	int v=n-1;

	while(e<v){
		swap(tej[e++],tej[v--]);
	}
	
	}
 
int main(){
char tej[30];
cin>>tej;
int len;
// int n=sizeof(tej)/sizeof(tej[0]);
for(int i=0;tej[i]!='\0';i++){
	//len=arr[i];
    len=len+1;

}

reverse(tej,len);
cout<<tej<<endl;
	return 0;
}
