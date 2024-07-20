#include<iostream>
using namespace std;
class graph{
	int g1[5][5];
	public:
	 int data;
	 graph(int value){
	 	data=value;
	 	for(int i=0;i<6;i++){
	 		for(int j=0;j<6;j++){
	 			g1[i][j]=0;
			 }
		 }
	 }
	 void addEdge(int u,int v){
	 	g1[u][v]=1;
	 	g1[v][u]=1;
	 }
	 void print(){
	 	for(int i=0;i<6;i++)
{
	for(int j=0;j<6;j++){
		cout<<g1[i][j]<<" ";
		
	}
	cout<<endl;
	 }	 }
	 
};
int main(){
	graph obj(6);
	obj.addEdge(0,1);
	obj.addEdge(0,2);
	obj.addEdge(0,4);
	obj.addEdge(0,3);
	obj.addEdge(1,3);
	obj.addEdge(2,3);
	obj.addEdge(2,4);
	obj.addEdge(2,5);
	obj.addEdge(3,5);
		
	

	 obj.print();



	return 0;
}
