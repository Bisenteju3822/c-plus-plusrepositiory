#include<iostream>
using namespace std;
template <class T>
T get( T a){
	return a;
}
template <class T>
T getMax(T a,T b){
	return a>b?a:b;
}
int main(){
	cout<<get(10)<<endl;
	cout<<get(10.60)<<endl;
	cout<<get("teju")<<endl;
	cout<<get('A')<<endl;
	cout<<typeid(get(10)).name()<<endl;
	cout<<getMax(20.1,20.33)<<endl;
}