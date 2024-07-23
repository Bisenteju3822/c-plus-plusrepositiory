#include<iostream>
using namespace std;
void findminmax(int arr[],int n,int &min,int &max){
	min=arr[0];
	 max=arr[0];
	for(int p=0;p<n;p++){
		if(arr[p]<min){
			min=arr[p];
		
		}
	 if(arr[p]>max){
		max=arr[p];
		
		}
		
		
	}
//	 int output( int minmax);
	// return 0;
}
int main(){
	int arr[]={1,2,3,6,9};
	int n=sizeof(arr)/sizeof (arr[0]);
	int min,max;	
 	findminmax(arr,n,min,max);
 	cout<<min<<"\t"<<"minimum"<<endl;
 	cout<<max<<"\t"<<"maximum"<<endl;
 	return 0;

}
//	 return output();}


//int main(){



//	return 0;
//}//