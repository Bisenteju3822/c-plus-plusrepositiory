#include<iostream>
using namespace std;
class map
{
	int gx[5][5];
	
	public:
		int data;
		map(int value)
		{
			data = value;
			for(int p=0;p<5;p++)
			{
				for(int q=0;q<5;q++)
				{
					gx[p][q] =0;
				}
			}
			
		}
		void addE(int u,int v,int weight)
		{
			gx[u][v]=weight;
			gx[v][u] =weight;
		}
		void print()
		{
			for(int p=0;p<5;p++)
			{
				for(int q=0;q<5;q++)
				{
					cout<<gx[p][q]<<"  ";
				}
				cout<<endl;
			}
		}
	    bool edgeExists(int u,int v)
	    {
	    	return gx[u][v] != 0;
		}
	 void findV(int v)
	 {
        cout << "Vertex " << v << " is connected to: ";
        for (int i = 0; i < 5; i++) 
		    {
            if (gx[v][i] != 0) {
                cout << i << "(weight: " << gx[v][i] << ") ";
            }
        }
        cout << endl;
    }
		
	
		
};
int main()
{
	map obj(5);
	obj.addE(0,4,5);
	obj.addE(0,1,8);
	obj.addE(4,0,3);
	obj.addE(1,2,6);
	obj.addE(2,3,2);	
	obj.addE(3,0,7);	
	obj.print();
	cout<<"Edge exists of 4, 0"<<"\t"<<(obj.edgeExists(4,0)?"yes":"No");
	cout<<endl;
	cout<<"Edge exists of 4, 3"<<"\t"<<(obj.edgeExists(4,3)?"yes":"No");
	cout<<endl<<endl;
	 
	 obj.findV(0);
     obj.findV(4);
	

	
	
}
